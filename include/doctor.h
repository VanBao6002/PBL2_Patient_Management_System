#ifndef DOCTOR_H
#define DOCTOR_H

#include "person.h"
#include <string>
#include <vector>

class Doctor : public Person {
    private:
        std::string specialization; // chuyen khoa
        std::vector<int> patientIDs; // ID benh nhan duoc bac si dam nhan
    
    public:
        Doctor();

        Doctor(const std::string &name_, char gender_, const Date &birthday_, int ID_, const std::string specialization_);

        ~Doctor();

        void displayInfo() const override;

        std::string getSpecialization() const {return specialization;}
        std::vector<int> getPatientIDs() const {return patientIDs;}

        void setSpecialization(const std::string &specialization_);
        void addPatientID(int patientID_);
        void removePatientID(int patientID_);

};        
#endif