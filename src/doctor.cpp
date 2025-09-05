#include "doctor.h"
#include "utils.h"

Doctor::Doctor() : Person(), specialization(""), patientIDs() {}

Doctor::Doctor(const std::string &name_, char gender_, const Date &birthday_, int ID_, const std::string specialization_) : Person(name_, gender_, birthday_, ID_) , specialization(specialization_) {}

Doctor::~Doctor() {}

void Doctor::setSpecialization(const std::string &specialization_) {
    specialization = specialization_;
}

// Add patient ID
void Doctor::addPatientID(int patientID_) {
    patientIDs.push_back(patientID_);
}

// Remove patient ID
void Doctor::removePatientID(int patientID_) {
    // Implementation to remove patientID_ from patientIDs
}