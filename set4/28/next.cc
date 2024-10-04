#include "line.h"

std::string Line::next() {
    if (position == std::string::npos) {
        return ""; 
    }

    size_t start = currentLine.find_first_not_of(" \t", position);
    if (start == std::string::npos) {
        return ""; 
    }

    size_t end = currentLine.find_first_of(" \t", start);

    position = end;

    return currentLine.substr(start, end - start);
}

