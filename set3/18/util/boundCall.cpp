#include "util.ih"
#include "../returnvalues/returnvalues.hh"
#include <iostream>

void boundCall(int argc, char *argv[]) {
    size_t argNumber = std::stoi(argv[1]);
    ReturnValues result = combine(argc, argv, argNumber);

    std::cout << "Argument number (bound call): " << result.nr << ", Value: " << result.value << "\n";
}

