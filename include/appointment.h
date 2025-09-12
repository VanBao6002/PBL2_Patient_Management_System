#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include"date.h"
#include"doctor.h"
#include"patient.h"
#include<string>
enum Status{
    DaDat, DaKham, Huy
};
class Appointment{
    private:    
        Doctor* doctor; // Bác sĩ (ID bác sĩ, tên bác sĩ, chuyên khoa)
        Patient* patient; // Bệnh nhân (ID bệnh nhân, tên bệnh nhân)
        std::string id; // Mã lịch hẹn (ID, duy nhất)
        Date date; // Ngày tháng năm của lịch hẹn
        std::string room; // Phòng khám (số phòng hoặc khoa)
        Status status; // Trạng thái lịch hẹn (đã đặt, đã khám, hủy)
        std::string time; // Giờ của lịch hẹn
    public: 
        
};
#endif