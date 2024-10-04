#include "calculator.ih"

bool calculator :: number(double *dest, bool *isInt){
        if(abs(*dest) < 1e-8) {
            *dest = 0;
        };
        if (*isInt)
        {*dest = static_cast<int>(*dest);
        }
        return true;
} 