#ifndef FUNCTION_HH
#define FUNCTION_HH

#include <string>
#include <iostream>

using namespace std;

void fun(string str);
void fun2(string const &str);
void callValue(string const &prog);
void callRef(string const &prog);

#endif