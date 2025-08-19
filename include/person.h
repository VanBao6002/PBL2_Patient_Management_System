#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "date.h"
class Person {
    protected:
        std::string name;
        char gender;
        Date birthday;
        int ID;
    public:
        //constructor
        Person(const std::string &name, char gender, const Date &birthday, int ID);
        virtual ~Person(); //virtual destructor 

        //pure virtual func
        virtual void displayInfo() const = 0;

        std::string getName() const {return name;}
        char getGender() const {return gender;}
        Date getBirthday() const {return birthday;}
        int getID() const {return ID;}

        void setName(const std::string &name_);
        void setGender(const char gender_);
        void setBirthday(const Date &birthday_); 
        void setID(int ID_); 
};

#endif
