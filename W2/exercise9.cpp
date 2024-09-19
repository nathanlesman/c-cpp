#include <iostream>
#include <cstdlib> 

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Gebruik: ./bestand <positief geheel getal>\n";
        return 1;  
    }

    int num = std::atoi(argv[1]);

    if (num <= 0) {
        std::cout << "Geef een geldig positief geheel getal op.\n";
        return 1;  
    }

    for (int i = 1; i <= 10; ++i) {
        std::cout << i << " * " << num << " = " << i * num << '\n';
    }

    return 0;
}

