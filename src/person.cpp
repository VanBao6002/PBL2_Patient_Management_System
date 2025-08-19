#include "person.h"
using namespace std;

//construtor
Person::Person(const string &name_, char gender_, const Date &birthday_, int ID_) : name(name_), gender(gender_), birthday(birthday_), ID(ID_) {}

//destructor
Person::~Person() {}

void Person::setName(const string &name_){
    name = name_;
}

void Person::setGender(char gender_){
    gender = gender_;
}

void Person::setBirthday(const Date &birthday_){
    birthday = birthday_;
}

void Person::setID(int ID_){
    ID = ID_;
}