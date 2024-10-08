#include "line.ih"

string Line::next() 
{
    if (position == string::npos) 
        return ""; 

    size_t start = currentLine.find_first_not_of(" \t", position);

    if (start == string::npos) 
        return ""; 

    size_t end = currentLine.find_first_of(" \t", start);

    position = end;

    return currentLine.substr(start, end - start);
}

