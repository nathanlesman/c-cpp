#include "calculator.ih"

bool Calculator::getOperator(const string &ope)
{
    if(ope.length() == 1 && (ope[0] == '+' || ope[0] == '-' || 
                             ope[0] == '*' || ope[0] == '/' || 
                             ope[0] == '%')) 
    {
        op = ope[0];  
        return true;
    } 

    else 
        return false;
}
