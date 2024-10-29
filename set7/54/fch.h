#ifndef INCLUDED_FCH_
#define INCLUDED_FCH_

#include <fstream>
#include <string>

class Fch {
    public:
        Fch(char const *fname);
        int run();

    private:
        enum Action {
            ASK,
            CHANGE_ALL,
            NO_CHANGES
        };

        void ask();
        void changeAll();
        bool findTarget();
        void modify();
        bool openInput(char const *fname);
        void process();
        char request() const;
        bool requestedN();
        void searchReplace();
        void showModification() const;
        void insertLine() const;

        std::ifstream d_input;
        std::string d_line;
        std::string d_target;
        std::string d_replacement;
        size_t d_pos;
        Action d_action;
};

#endif
