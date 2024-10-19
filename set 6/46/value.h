#ifndef VALUE_H
#define VALUE_H

#include "enum.h"
#include <iostream>

class Value {
    Token d_token;
    union {
        int u_intValue;
        double u_doubleValue;
        char u_charValue;
    } u_value;

public:
    Value();
    Value(int intValue);
    Value(double doubleValue);
    Value(char charValue);

    int intValue() const;
    double doubleValue() const;
    char charValue() const;

    void intValue(int value);
    void doubleValue(double value);
    void charValue(char value);

    Token token() const;
    void requireSpecial(Token token);
};

#endif // VALUE_H

