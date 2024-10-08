#ifndef LINE_H
#define LINE_H

#include <string>

class Line 
{
    std::string d_currentLine;
    size_t      d_position;

    public:
        Line();
        bool getLine();
        std::string next();
};

#endif

