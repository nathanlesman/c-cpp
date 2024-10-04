#ifndef LINE_H
#define LINE_H

#include <string>
#include <iostream>

class Line {
    std::string currentLine;
    size_t position;

public:
    Line();
    bool getLine();
    std::string next();
};

#endif

