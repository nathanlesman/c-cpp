#include "line.ih"

bool Line::getLine() 
{
    getline(cin, currentLine);
    position = 0;

    for (char c : currentLine) 
    {
        if (!isspace(c)) 
            return true;
    }

    return false;
}

