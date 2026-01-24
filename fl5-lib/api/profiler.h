/**
 * Flow5 Performance Profiler
 * 
 * A lightweight, header-only profiler for detailed timing analysis of Flow5.
 * Thread-safe and designed for minimal overhead.
 * 
 * Usage:
 *   PROFILE_SCOPE("SectionName");  // Auto-closes at scope end
 *   PROFILE_START("ManualSection");
 *   ... code ...
 *   PROFILE_END("ManualSection");
 *   
 *   ProfileTimer::instance().report();  // Print report
 */

#pragma once

#include <chrono>
#include <string>
#include <map>
#include <vector>
#include <mutex>
#include <sstream>
#include <iomanip>
#include <iostream>

class ProfileTimer {
public:
    struct TimingData {
        double totalMs = 0.0;
        int count = 0;
        double minMs = 1e9;
        double maxMs = 0.0;
    };

    static ProfileTimer& instance() {
        static ProfileTimer inst;
        return inst;
    }

    void start(const std::string& name) {
        std::lock_guard<std::mutex> lock(m_mutex);
        m_starts[name] = std::chrono::high_resolution_clock::now();
    }

    void end(const std::string& name) {
        auto endTime = std::chrono::high_resolution_clock::now();
        std::lock_guard<std::mutex> lock(m_mutex);
        
        auto it = m_starts.find(name);
        if (it != m_starts.end()) {
            double ms = std::chrono::duration<double, std::milli>(endTime - it->second).count();
            auto& data = m_timings[name];
            data.totalMs += ms;
            data.count++;
            data.minMs = std::min(data.minMs, ms);
            data.maxMs = std::max(data.maxMs, ms);
            m_starts.erase(it);
            
            // Record order for sorted output
            if (std::find(m_order.begin(), m_order.end(), name) == m_order.end()) {
                m_order.push_back(name);
            }
        }
    }

    void reset() {
        std::lock_guard<std::mutex> lock(m_mutex);
        m_timings.clear();
        m_starts.clear();
        m_order.clear();
    }

    std::string report() const {
        std::lock_guard<std::mutex> lock(m_mutex);
        
        std::ostringstream ss;
        ss << "\n";
        ss << "╔══════════════════════════════════════════════════════════════════════════════╗\n";
        ss << "║                     FLOW5 PERFORMANCE PROFILING REPORT                       ║\n";
        ss << "╠══════════════════════════════════════════════════════════════════════════════╣\n";
        
        double totalAll = 0.0;
        for (const auto& name : m_order) {
            totalAll += m_timings.at(name).totalMs;
        }
        
        ss << "║ " << std::left << std::setw(35) << "Section"
           << std::right << std::setw(10) << "Total(ms)"
           << std::setw(8) << "Count"
           << std::setw(10) << "Avg(ms)"
           << std::setw(8) << "%" << "  ║\n";
        ss << "╠══════════════════════════════════════════════════════════════════════════════╣\n";
        
        for (const auto& name : m_order) {
            const auto& data = m_timings.at(name);
            double avg = data.count > 0 ? data.totalMs / data.count : 0.0;
            double pct = totalAll > 0 ? (data.totalMs / totalAll * 100.0) : 0.0;
            
            ss << "║ " << std::left << std::setw(35) << name.substr(0, 35)
               << std::right << std::fixed << std::setprecision(1)
               << std::setw(10) << data.totalMs
               << std::setw(8) << data.count
               << std::setw(10) << avg
               << std::setw(7) << pct << "%" << " ║\n";
        }
        
        ss << "╠══════════════════════════════════════════════════════════════════════════════╣\n";
        ss << "║ " << std::left << std::setw(35) << "TOTAL"
           << std::right << std::fixed << std::setprecision(1)
           << std::setw(10) << totalAll
           << std::setw(8) << ""
           << std::setw(10) << ""
           << std::setw(7) << "100" << "%" << " ║\n";
        ss << "╚══════════════════════════════════════════════════════════════════════════════╝\n";
        
        return ss.str();
    }

    void print() const {
        std::cout << report() << std::flush;
    }

private:
    ProfileTimer() = default;
    
    mutable std::mutex m_mutex;
    std::map<std::string, std::chrono::high_resolution_clock::time_point> m_starts;
    std::map<std::string, TimingData> m_timings;
    std::vector<std::string> m_order;
};

// RAII scope profiler
class ScopeProfiler {
public:
    ScopeProfiler(const std::string& name) : m_name(name) {
        ProfileTimer::instance().start(name);
    }
    ~ScopeProfiler() {
        ProfileTimer::instance().end(m_name);
    }
private:
    std::string m_name;
};

// Macros for easy profiling
#define PROFILE_ENABLED 1

#if PROFILE_ENABLED
    #define PROFILE_SCOPE(name) ScopeProfiler _profiler_##__LINE__(name)
    #define PROFILE_START(name) ProfileTimer::instance().start(name)
    #define PROFILE_END(name) ProfileTimer::instance().end(name)
    #define PROFILE_RESET() ProfileTimer::instance().reset()
    #define PROFILE_REPORT() ProfileTimer::instance().report()
    #define PROFILE_PRINT() ProfileTimer::instance().print()
#else
    #define PROFILE_SCOPE(name)
    #define PROFILE_START(name)
    #define PROFILE_END(name)
    #define PROFILE_RESET()
    #define PROFILE_REPORT() ""
    #define PROFILE_PRINT()
#endif
