#ifndef INCLUDED_PARSER_
#define INCLUDED_PARSER_

#include "line.h"
#include <string>

class Parser
{
    public:
    enum Return { NO_NUMBER, NUMBER, EOLN };
    
    bool reset();
    Return number(double *dest); 
    bool isIntegral();
    string next();

    private:
    Line d_line;
    Return convert(double *dest, string const &str);
    bool pureDouble(double *dest, string const &str);
    bool d_integral;
};
        
#endif
