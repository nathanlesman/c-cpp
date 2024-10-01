#include "main.ih"
using namespace std;

void printResult(const string &arg, int lines, int words, int chars) {
    if (arg.find("-l") != string::npos) {
        printLines(lines);
    }
    if (arg.find("-w") != string::npos) {
        printWords(words);
    }
    if (arg.find("-c") != string::npos) {
        printChars(chars);
    }
}

