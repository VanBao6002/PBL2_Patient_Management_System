#include "utils.h"
#include <stdexcept>

void Utils::validName(const std::string &name_) {
    if (name_.empty()) {
        throw std::invalid_argument("Name cannot be empty");
    }
}

void Utils::validGender(char gender) {
    if (std::tolower(gender) != 'm' && std::tolower(gender) != 'f'){
        throw std::invalid_argument("Invalid gender, must be 'M' or 'F'");
    }
}
bool Utils::isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void Utils::validBirthday(const Date &birthday) {
    if (birthday.month < 1 || birthday.month > 12){
        throw std::invalid_argument("Invalid month");
    }

    int maxDay = 0;
    switch(birthday.month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
            maxDay = 31; break;
        case 4: case 6: case 9: case 11: 
            maxDay = 30; break;
        case 2:
            if (isLeapYear(birthday.year)) {
                maxDay = 29; 
            } else {
                maxDay = 28; 
            }
            break;
        default:
            throw std::invalid_argument("Invalid month");
    }

    if (birthday.day < 1 || birthday.day > maxDay){
        throw std::invalid_argument("Invalid day");
    }

    if (birthday.year < 1900 || birthday.year > 2025){
        throw std::invalid_argument("Invalid year, out of range");
    }
}

void Utils::validID(int ID) {
    if (ID < 0){
        throw std::invalid_argument("Invalid ID, ID must be non-negative");
    }
}

