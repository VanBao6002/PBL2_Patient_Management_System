#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <stdexcept>
#include "date.h"

class Utils {
public:
    static void validName(const std::string &name);
    static void validGender(char gender);
    static bool isLeapYear(int year);
    static void validBirthday(const Date &birthday);
    static void validID(int ID);
};

#endif 