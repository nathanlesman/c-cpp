#include "calculator.ih"

void Calculator::run()
{     
    cout << "? ";
    
    while(getline(cin, line)) 
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
            
        cout << "? ";
        } 
        else 
            cout << "Error: Invalid expression" << '\n';
        }
    } 
}

