#include "calculator.ih"

bool Calculator::getOperator(const string &str_operation)
{
    if(str_operation.length() == 1 && (ope[0] == '+' || ope[0] == '-' || 
                             ope[0] == '*' || ope[0] == '/' || 
                             ope[0] == '%'))
        return true;

    else 
        return false;
}
