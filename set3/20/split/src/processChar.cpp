#include "main.ih"
using namespace std;

void processChar(int c, int &chars, int &words, int &lines, bool &in_word) {
    chars++;
    switch (c) {
        case '\n':
            lines++;
        case ' ':
        case '\t':
            in_word = false;
            break;
        default:
            if (!in_word) {
                in_word = true;
                words++;
            }
            break;
    }
}

