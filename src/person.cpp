#include "person.h"
#include "utils.h"
#include <cctype>
#include <stdexcept>

//default constructor
Person::Person() : name(""), gender('M'), birthday(Date()), ID(0) {}

//parameterized constructor
Person::Person(const std::string &name_, char gender_, const Date &birthday_, int ID_) : name(name_), gender(gender_), birthday(birthday_), ID(ID_) {
    Utils::validateName(name_);
    Utils::validateGender(gender_);
    Utils::validateBirthday(birthday_);
    Utils::validateID(ID_);
}

//destructor
Person::~Person() {}

//setters
void Person::setName(const std::string &name_){
    Utils::validateName(name_);
    name = name_;
}

void Person::setGender(char gender_){
    Utils::validateGender(gender_);
    gender = gender_;
}

void Person::setBirthday(const Date &birthday_){
    Utils::validateBirthday(birthday_);
    birthday = birthday_;
}

void Person::setID(int ID_){
    Utils::validateID(ID_);
    ID = ID_;   
}