#pragma once
#include <string>
#include <chrono>
#include <nlohmann/json.hpp>

class Task {
public:
    std::string id;
    std::string description;
    std::string category;
    int urgency;        // 1 = low, 2 = high
    int importance;     // 1 = low, 2 = high
    bool completed;
    std::chrono::system_clock::time_point created;
    std::chrono::system_clock::time_point completed_at;
    std::string notes;
    bool rolled_over;
    int original_urgency;

    // Constructors
    Task() = default;
    Task(const std::string& desc, int urg, int imp, const std::string& cat = "");
    
    // Copy constructor and assignment
    Task(const Task& other) = default;
    Task& operator=(const Task& other) = default;
    
    // Move constructor and assignment
    Task(Task&& other) noexcept = default;
    Task& operator=(Task&& other) noexcept = default;

    // Methods
    void markComplete(const std::string& completion_notes = "");
    void rollOver();
    bool isInQuadrant(int urg, int imp) const;
    std::string getQuadrantName() const;
    
    // Validation
    static bool isValidUrgency(int urg);
    static bool isValidImportance(int imp);
    static bool isValidDescription(const std::string& desc);
    
    // JSON serialization
    nlohmann::json toJson() const;
    static Task fromJson(const nlohmann::json& j);

private:
    std::string generateId() const;
    std::string timePointToString(const std::chrono::system_clock::time_point& tp) const;
    std::chrono::system_clock::time_point stringToTimePoint(const std::string& str) const;
};

// JSON conversion helpers
void to_json(nlohmann::json& j, const Task& t);
void from_json(const nlohmann::json& j, Task& t);