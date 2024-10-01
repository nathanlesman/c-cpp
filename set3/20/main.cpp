#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    // Read from standard input (stdin)
    int chars = 0;
    int lines = 1;
    int words = 0;
    bool in_word = false;
    int c;
    
    // Read characters from the input stream (cin) until EOF
    while ((c = cin.get()) != EOF) {
        chars++; // Increment the character count

        switch (c) {
            case '\n': // If the character is a new line, increment the line count
                lines++;
            case ' ': // White-space characters (space, tab, newline)
            case '\t':
                in_word = false;
                break;
            default: // Non-white space characters
                if (!in_word) {
                    in_word = true; // Start a new word
                    words++;
                }
                break;
        }
    }

    // Check the argument passed to the program
    string x = argv[1];
    
    if (x.find("-l") != string::npos) {
        cout << setw(8) << lines << '\n'; // Print number of lines
    }
    if (x.find("-w") != string::npos) {
        cout << setw(8) << words << '\n'; // Print number of words
    }
    if (x.find("-c") != string::npos) {
        cout << setw(8) << chars << '\n'; // Print number of characters
    }

    return 0;
}

