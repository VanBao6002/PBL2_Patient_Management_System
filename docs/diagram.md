                  ┌─────────────┐
                  │   Person    │  <- Abstract class
                  │─────────────│
                  │ - name      │
                  │ - age       |
                  │─────────────│
                  │ +displayInfo() = 0 │
                  └─────────────┘
                        ▲
        ┌───────────────┴───────────────┐
        │                               │
  ┌─────────────┐                 ┌─────────────┐
  │  Patient    │                 │   Doctor    │
  │─────────────│                 │─────────────│
  │ - patientID │                 │ - doctorID  │
  │ - history   │                 │ - specialty │
  │─────────────│                 │─────────────│
  │ +displayInfo()│                 │ +displayInfo()│
  └─────────────┘                 └─────────────┘

                  ┌─────────────┐
                  │ Appointment │
                  │─────────────│
                  │ - Patient*  │
                  │ - Doctor*   │
                  │ - date      │
                  │─────────────│
                  │ +display()  │
                  └─────────────┘

                  ┌─────────────┐
                  │  Hospital   │  <- Manager class
                  │─────────────│
                  │ - patients: vector<Patient> │
                  │ - doctors:  vector<Doctor>  │
                  │ - appointments: vector<Appointment> │
                  │─────────────│
                  │ +addPatient() │
                  │ +addDoctor()  │
                  │ +findDoctorByID() │
                  │ +printAllPatients() │
                  │ +printAllDoctors()  │
                  │ +scheduleAppointment() │
                  │ +printAppointments()  │
                  └─────────────┘
