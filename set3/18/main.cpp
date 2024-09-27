#include "returnvalues/returnvalues.hh"
#include "util/util.hh"
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cout << "Usage: " << argv[0] << " <argument-number> [args...]" << std::endl;
        return 0;
    }

    // Call structCall to check argument
    if (!structCall(argc, argv)) {
        return 1;
    }

    // Call boundCall for further processing
    boundCall(argc, argv);
    return 0;
}

