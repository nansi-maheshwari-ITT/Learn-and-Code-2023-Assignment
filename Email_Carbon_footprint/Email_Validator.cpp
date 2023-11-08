#include "Email_Validator.h"
#include <regex>
#include <iostream>
using namespace std;

bool IsValidEmail(string &email) {
    regex pattern(R"(\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,7}\b)");
    return regex_match(email, pattern);
}
