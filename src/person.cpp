#include "person.h"
#include <stdexcept>
using namespace std;

//construtor
Person::Person(const string &name_, char gender_, const Date &birthday_, int ID_) : name(name_), gender(gender_), birthday(birthday_), ID(ID_) {}

//destructor
Person::~Person() {}

void Person::setName(const string &name_){
    name = name_;
}

void Person::setGender(char gender_){
    if (std::tolower(gender_) != 'm' || std::tolower(gender_) != 'f'){
        throw std::invalid_argument("Gioi tinh phai la 'M hoac 'F");
    }
    else {
        gender = gender_;
    }
}

void Person::setBirthday(const Date &birthday_){
    if (birthday_.month < 1 || birthday_.month > 12){
        throw std::invalid_argument("Thang sinh phai tu 1 - 12");
    }

    int maxDay;
    switch(birthday_.month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
            maxDay = 31; break;
        case 4: case 6: case 9: case 11: 
            maxDay = 30; break;
        case 2:
            if ((birthday_.year % 4 == 0 && birthday_.year % 100 != 0) || (birthday_.year % 400 == 0))
                maxDay = 29; 
            else 
                maxDay = 28;
            break;
    }

    if (birthday_.day < 1 || birthday_.day > maxDay){
        throw std::invalid_argument("Ngay sinh phai khong hop le");
    }

    if (birthday_.year < 1900 || birthday_.year > 2025){
        throw std::invalid_argument("Nam sinh vuot qua pham vi cho phep");
    }
    
    birthday = birthday_;
}

void Person::setID(int ID_){
    if (ID_ < 0){
        throw std::invalid_argument("ID phai lon hon 0");
    }
    else{
        ID = ID_;
    }
}