#include "utils.h"
#include <stdexcept>
#include <unordered_set>
#include <string>
#include <ctime>

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
    std::time_t t = std::time(nullptr);
    std::tm* currentTime = std::localtime(&t);
    int currentYear = currentTime->tm_year + 1900;
    int lowerYearLimit = currentYear - 200;

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

    if (birthday.year < lowerYearLimit || birthday.year > currentYear){
        throw std::invalid_argument("Invalid year, out of range");
    }
}

void Utils::validID(int ID) {
    if (ID < 0){
        throw std::invalid_argument("Invalid ID, ID must be non-negative");
    }
}

void Utils::checkExistPatientID(std::unordered_set<int> patientIDs, int patientID_){
    if (patientIDs.find(patientID_) == patientIDs.end()){
        throw std::invalid_argument("patientID: " + std::to_string(patientID_) +  " is not found in doctor's list");
    }
}

void Utils::checkExistSpecialization(std::string specialization_){
    std::unordered_set<std::string> specializationTable = {"Cardiology", "Neurology", "Pediatrics", "Orthopedics"};
    if (specializationTable.find(specialization_) == specializationTable.end()){
        throw std::invalid_argument("specializatio: " + specialization_ + " is not found");
    }
}