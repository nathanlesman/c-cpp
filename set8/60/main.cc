#include <iostream>
#include <utility>

class Demo
{
    public:
        // Constructor
        Demo()
        {
            std::cout << "Constructor called\n";
        }

        // Destructor
        ~Demo()
        {
            std::cout << "Destructor called\n";
        }

        // Copy constructor
        Demo(Demo const &other)
        {
            std::cout << "Copy constructor called\n";
        }

        // Move constructor
        Demo(Demo &&tmp) noexcept
        {
            std::cout << "Move constructor called\n";
        }

        // Copy assignment
        Demo &operator=(Demo const &rhs)
        {
            std::cout << "Copy assignment called\n";
            return *this;
        }

        // Move assignment
        Demo &operator=(Demo &&tmp) noexcept
        {
            std::cout << "Move assignment called\n";
            return *this;
        }
};

// Factory function
Demo factory()
{
    return Demo{};  // Return value optimization (RVO) candidate
}

int main()
{
    std::cout << "\n=== Copy Elision Example (RVO) ===\n";
    {
        std::cout << "Demo d1 = factory():\n";
        Demo d1 = factory();  // Copy elision (RVO) - no copy/move constructor called
    }

    std::cout << "\n=== Move Constructor Example ===\n";
    {
        std::cout << "Demo d2 = std::move(factory()):\n";
        Demo d2 = std::move(factory());  // Force move construction
    }

    std::cout << "\n=== Copy Assignment Example ===\n";
    {
        std::cout << "Demo d3; Demo d4; d4 = d3:\n";
        Demo d3;
        Demo d4;
        d4 = d3;  // Copy assignment
    }

    std::cout << "\n=== Move Assignment Example ===\n";
    {
        std::cout << "Demo d5; d5 = factory():\n";
        Demo d5;
        d5 = factory();  // Move assignment
    }

}
