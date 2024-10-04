#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
    string str = next();
    if (str.empty())
        return EOLN;
    return convert(dest, str);
}