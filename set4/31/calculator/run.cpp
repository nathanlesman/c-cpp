#include "calculator.ih"
void calculator::run (){   
    do {
        cout << "? ";
        getline(cin, line);
        if (!line.empty()) {
            if (expression(line)) {
                if (intlh && intrh) {
                    evaluate(static_cast<int>(lh), op, static_cast<int>(rh));
                } else if (intlh && !intrh) {
                    evaluate(static_cast<int>(lh), op, rh);
                } else if (!intlh && intrh) {
                    evaluate(lh, op, static_cast<int>(rh));
                } else {
                    evaluate(lh, op, rh);
                }
            } else {
                cout << "Error: Invalid expression" << '\n';
            }
        }
    } while (!line.empty());
}


                
    

