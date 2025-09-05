#ifndef PATIENT_H
#define PATIENT_H

#include "person.h"
#include "date.h"
#include <string>
class Patient : public Person{
    private:
        std::string bloodType;
        std::string namemother;
        std::string namefather;
    public:
        Patient();

        Patient(const std::string bloodType, const std::string &namemother,const std::string &namefather);
        
        virtual ~Patient();

        virtual void displayInfo() const override;

        std::string getBloodType() const {return bloodType;}
        std::string getNamemother() const {return namemother;}
        std::string getNamefather() const {return namefather;}

        void setBloodType(const std::string &bloodType_);
        void setNamemother(const std::string &namemother_);
        void setNamefather(const std::string &namefather_);
};

#endif