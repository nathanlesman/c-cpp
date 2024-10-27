#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <number_of_iterations>\n";
        return 1;
    }

    // Convert command line argument to number
    long iterations = stol(argv[1]);
    
    // Create output stream and set failbit
    ostream out(cout.rdbuf());
    out.setstate(ios::failbit);

    // Version 1: Without if-statement check
    // Commented out to submit version 2
    /*
    for (long i = 0; i < iterations; ++i) {
        out << "Nr. of command line arguments " << argc << '\n';
    }
    */

    // Version 2: With if-statement check
    for (long i = 0; i < iterations; ++i) {
        if (out.good()) {
            out << "Nr. of command line arguments " << argc << '\n';
        }
    }

    return 0;
}
