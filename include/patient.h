#ifndef PATIENT_H
#define PATIENT_H

#include "person.h"
#include <string>
class Patient : public Person{
    private:
        std::string bloodType;
        std::string nameMother;
        std::string nameFather;
    public:
        Patient();

        Patient(const std::string &name_, char gender_, const Date &birthday_, int ID_, const std::string &bloodType, const std::string &nameMother,const std::string &nameFather);
        
        virtual ~Patient();

        virtual void displayInfo() const override;

        std::string getBloodType() const {return bloodType;}
        std::string getNameMother() const {return nameMother;}
        std::string getNameFather() const {return nameFather;}

        void setBloodType(const std::string &bloodType_);
        void setNameMother(const std::string &nameMother_);
        void setNameFather(const std::string &nameFather_);
};

#endif