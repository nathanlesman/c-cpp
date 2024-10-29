#include <iostream>
#include <iomanip>

int main() 
{
    double value = 12.04;

    std::cout 
        << "std display:     \"" 
        << std::setw(15) << value 
        << "\"\n"

        << "left aligned:   \"" 
        << std::setw(15) << std::left << value 
        << "\"\n"

        << "right aligned:  \"" 
        << std::setw(15) << std::right << value 
        << "\"\n"

        << "3 digits:       \"" 
        << std::setw(15) << std::setprecision(3) << value 
        << "\"\n"

        << "4-digit fraction: \"" 
        << std::setw(15) << std::fixed << std::setprecision(4) << value 
        << "\"\n"

        << "std display:     \"" 
        << std::setw(15) << std::defaultfloat << std::setprecision(6) << value 
        << "\"\n";

}
