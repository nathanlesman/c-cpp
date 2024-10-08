#include "calculator.ih"

void Calculator::run()
{     
    while(getline(cin, line)) 
    {
        cout << "? ";
        
        if (!line.empty()) 
        {
            if (expression(line)) 
            {
                if (intlh && intrh) 
                    evaluate(static_cast<int>(lh), op, static_cast<int>(rh));
                else if (intlh && !intrh)
                    evaluate(static_cast<int>(lh), op, rh);
                else if (!intlh && intrh)
                    evaluate(lh, op, static_cast<int>(rh));
                else
                    evaluate(lh, op, rh);
            } 
            else 
                cout << "Error: Invalid expression" << '\n';
        }
    } 
}

