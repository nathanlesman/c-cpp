#include "main.ih"
using namespace std;

using namespace std;

int main(int argc, char *argv[]) {
    int chars = 0, words = 0, lines = 1;
    countText(chars, words, lines);  
    string arg = argv[1];
    printResult(arg, lines, words, chars);  
    return 0;
}

