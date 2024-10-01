#include "main.ih"
using namespace std;

void countText(int &chars, int &words, int &lines) {
    bool in_word = false;
    int c;
    while ((c = cin.get()) != EOF) {
        processChar(c, chars, words, lines, in_word);
    }
}

