#include "line.h"
#include <iostream>

int main() {
    Line line;

    std::cout << "Enter lines of text (Ctrl+D to end):\n";

    while (line.getLine()) {
        std::string word;

        while (!(word = line.next()).empty()) {
            std::cout << "Next word: " << word << std::endl;
        }
    }

    return 0;
}

