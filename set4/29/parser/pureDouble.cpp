#include "parser.ih"

bool Parser::pureDouble(double *dest, std::string const &str) {
    size_t pos;
    *dest = stod(str,&pos);
    if (pos != str.length()){
    return false;
    }
    else{
    return true;
    d_integral = ((str.find('.') == string::npos) &&
                  (str.find('e') == string::npos) &&
                  (str.find('E') == string::npos));
    }
 }