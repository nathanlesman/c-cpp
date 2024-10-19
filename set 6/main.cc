#include "symtab.h"
#include <iostream>

int main() {
    Symtab symtab;
    while (true) {
        std::cout << "? ";

        std::string line;
        std::cin >> line;

        std::cout << "inserted " << symtab.find(line).ident() << "\n"
                  << "All symbols:\n";

        for (size_t idx = 0, end = symtab.size(); idx != end; ++idx) {
            std::cout << symtab.at(idx).ident() << ' ';
        }

        std::cout << '\n';
    }
}

