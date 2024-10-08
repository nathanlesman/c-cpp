#ifndef INCLUDED_CALCULATOR_
#define INCLUDED_CALCULATOR_

#include <string>

// ES: REFACTOR
// ES: consider enums
class Calculator
{
    std::string d_str_operation;      // operator as a string
    std::string d_line;               // entire operation 
    double      d_lnumber, d_rnumber; // left and right number in operation
    size_t      d_first_space, d_second_space; // location of first and second space

    bool        d_lint, d_rint;       // bool value that lets us know
                                      // whether the left and right numbers 
                                      // are integers

    void getSpaces();
    void parseExpression();
    bool number(double *dest, bool *isInt);
    bool expression();
    bool getOperator();
    void evaluate();
    
    public:
        void run();
};
        
#endif
