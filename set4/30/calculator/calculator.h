#ifndef INCLUDED_CALCULATOR_
#define INCLUDED_CALCULATOR_

#include <string>
#include <iostream>
#include <cmath>
using namespace std;

class calculator
{
    public:
    void run();


    private:
    bool number(double *dest, bool *isInt);
    bool expression(string&  line);
    bool getOperator(const string &ope);
    void evaluate(int lh, char op, int rh);
    void evaluate(double lh, char op, double rh);
    void evaluate(int lh, char op, double rh);
    void evaluate(double lh, char op, int rh);
    char op;
    string line, ope;
    double lh,rh,*dest;
    bool intlh, intrh, *isInt;
};
        
#endif
