#include <nlohmann/json.hpp>  // This is the header we just installed
#include <iostream>
#include <string>

int main() {
    // Create a JSON object - this demonstrates the library is working
    nlohmann::json test_data;
    
    // Add some data to test basic functionality
    test_data["message"] = "nlohmann/json is working!";
    test_data["version"] = "3.11.3";
    test_data["working"] = true;
    
    // Convert to string and display
    std::cout << "JSON library test:\n";
    std::cout << test_data.dump(2) << std::endl;  // dump(2) means indent with 2 spaces
    
    return 0;
}