#include "value.h"
#include <iostream>

Value::Value() : d_token(INT) {
    u_value.u_intValue = 0;
}

Value::Value(int intValue) : d_token(INT) {
    u_value.u_intValue = intValue;
}

Value::Value(double doubleValue) : d_token(DOUBLE) {
    u_value.u_doubleValue = doubleValue;
}

Value::Value(char charValue) : d_token(CHAR) {
    u_value.u_charValue = charValue;
}

int Value::intValue() const {
    return u_value.u_intValue;
}

double Value::doubleValue() const {
    return u_value.u_doubleValue;
}

char Value::charValue() const {
    return u_value.u_charValue;
}

void Value::intValue(int value) {
    d_token = INT;
    u_value.u_intValue = value;
}

void Value::doubleValue(double value) {
    d_token = DOUBLE;
    u_value.u_doubleValue = value;
}

void Value::charValue(char value) {
    d_token = CHAR;
    u_value.u_charValue = value;
}

Token Value::token() const {
    return d_token;
}

void Value::requireSpecial(Token token) {
    if (token != QUIT && token != ERROR && token != IDENT) {
        std::cerr << "internal error: forcing token " << token << " to value QUIT\n";
        d_token = QUIT;
    }
}

