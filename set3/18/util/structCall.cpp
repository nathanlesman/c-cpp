#include "util.ih"
#include "../returnvalues/returnvalues.hh"
#include <iostream>

bool structCall(int argc, char *argv[]) {
    size_t argNumber = std::atoi(argv[1]);
    ReturnValues result = combine(argc, argv, argNumber);

    if (!result.ok) {
        std::cout << "Argument " << argNumber << " does not exist." << std::endl;
        std::cout << "Usage: " << argv[0] << " <argument-number> [args...]" << std::endl;
        return false;
    }

    std::cout << "Argument number: " << result.nr << ", Value: " << result.value << std::endl;
    return true;
}

