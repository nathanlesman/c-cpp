#include "line.h"

Line::Line() : position(0) {}

bool Line::getLine() {
    std::getline(std::cin, currentLine);
    position = 0;

    for (char c : currentLine) {
        if (!isspace(c)) {
            return true;
        }
    }
    return false;
}

