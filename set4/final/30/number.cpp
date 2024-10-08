#include "calculator.ih"

bool Calculator::number(double *dest, bool *isInt)
{
        if(abs(*dest) < 1e-8) 
            *dest = 0;
        
        if (*isInt)
            *dest = static_cast<double>(*dest);
        
        return true;
} 
