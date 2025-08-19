#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <stdexcept>
#include "date.h"

class Utils {
public:
    static void validateName(const std::string &name);
    static void validateGender(char gender);
    static bool isLeapYear(int year);
    static void validateBirthday(const Date &birthday);
    static void validateID(int ID);
};

#endif 