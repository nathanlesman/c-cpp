#include "numbers.h"
#include <iostream>

int main()
{
    // Demonstrate uninitialized values
    Numbers uninitialized(5);
    std::cout << "Uninitialized values: " << uninitialized << '\n';
    
    // Demonstrate initialized values
    Numbers initialized(5, 42);
    std::cout << "Initialized values: " << initialized << '\n';
    
    // Test copy construction
    Numbers copy = initialized;
    std::cout << "Copied values: " << copy << '\n';
    
    // Test move construction
    Numbers moved = std::move(copy);
    std::cout << "Moved values: " << moved << '\n';
    
    // Test at() function with valid and invalid indices
    std::cout << "Value at index 2: " << moved.at(2) << '\n';
    std::cout << "Attempting to access invalid index:\n";
    moved.at(10);  // Should print error message
    
    return 0;
}
