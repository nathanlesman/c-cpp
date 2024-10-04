#include "calculator.ih"

bool calculator ::expression(string& line)
{
    size_t firstspace = line.find (" ");
    size_t secondspace = line.find(" ", firstspace + 1);
    if (firstspace == string::npos || secondspace == string::npos){
        return false;
    }
    lh = stod(line.substr(0, firstspace));
    string ope = line.substr(firstspace + 1, secondspace - firstspace - 1);
    rh = stod(line.substr(secondspace + 1));

    intlh =( floor(lh) == lh);
    intrh = (floor(rh) == rh);
    if ( getOperator(ope)&& number(&lh, &intlh) && number (&rh, &intrh)){
        return true;
    }
    else{
        return false;
    }
    
}