#include "doctor.h"
#include "utils.h"
#include <algorithm>

Doctor::Doctor() : Person(), specialization(""), patientIDs(), doctorStatus(Available) {}

Doctor::Doctor(const std::string &name_, char gender_, const Date &birthday_, int ID_, const std::string specialization_, status doctorStatus_) : Person(name_, gender_, birthday_, ID_) , specialization(specialization_), doctorStatus(doctorStatus_) {}

void Doctor::setSpecialization(const std::string &specialization_) {
    Utils::checkExistSpecialization(specialization_);
    specialization = specialization_;
}

// Add patient ID
void Doctor::addPatientID(int patientID_){
    Utils::checkExistPatientID(patientIDs, patientID_);
    patientIDs.insert(patientID_);
}

// Remove patient ID
void Doctor::removePatientID(int patientID_) {
    Utils::checkExistPatientID(patientIDs, patientID_);
    patientIDs.erase(patientID_);
}