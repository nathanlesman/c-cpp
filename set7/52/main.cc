#include <iostream>
#include <iomanip>
#include <ctime>

// Define the manipulator function
struct now_manipulator {
    friend std::ostream& operator<<(std::ostream& os, const now_manipulator&) {
        std::time_t t = std::time(nullptr);
        std::tm* tm_info = std::localtime(&t);
        
        // Format similar to asctime but without newline
        os << std::put_time(tm_info, "%a %b %d %H:%M:%S %Y");
        
        return os;
    }
};

// Global instance of the manipulator
now_manipulator now;

int main() {
    std::cout << "Current time: " << now << '\n';
    
    // Multiple uses demonstration
    std::cout << "Time again: " << now << "\nAnd again: " << now << '\n';
    
}
