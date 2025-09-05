Hệ thống Quản lý Bệnh nhân (PMS) cần có những hành vi gì?

Hãy hình dung PMS giống như một phần mềm trợ lý cho bệnh viện/phòng khám. Nó phải quản lý con người (bệnh nhân, bác sĩ) và mối quan hệ giữa họ (lịch hẹn/khám).

0. Init
- Lớp Person
- Lớp Patient
- Lớp Patient_Manager
- Lớp Doctor
- Lớp Doctor_Manager
- Lớp Appointment
- Lớp Appointment_Manager

1. Quản lý Bệnh nhân (Thừa kế từ lớp Person)

- Thêm bệnh nhân mới (Mã ID, họ tên, tuổi, giới tính, thông tin liên hệ, tiền sử bệnh…). 
    

- Xem thông tin bệnh nhân theo ID.

- Sửa thông tin bệnh nhân (ví dụ: đổi số điện thoại, địa chỉ).

- Xóa bệnh nhân (nếu không còn hoạt động).

- Liệt kê tất cả bệnh nhân.

2. Quản lý Bác sĩ

- Thêm bác sĩ (ID, họ tên, chuyên khoa, lịch trực/khả năng khám).

- Xem thông tin bác sĩ.

- Sửa thông tin bác sĩ.

- Xóa bác sĩ.

- Liệt kê tất cả bác sĩ.

- Kiểm tra thông tin bệnh nhân được bác sĩ đảm nhận

3. Quản lý Lịch hẹn (Appointment)

- Đặt lịch hẹn (gồm bệnh nhân + bác sĩ + ngày/giờ + lý do khám).

- Xem chi tiết một lịch hẹn theo ID.

- Liệt kê tất cả lịch hẹn (có thể sắp xếp theo ngày hoặc theo bệnh nhân).

- Tìm lịch hẹn theo bác sĩ hoặc bệnh nhân.

- Hủy lịch hẹn.

- (Nâng cao) Kiểm tra xung đột thời gian khi đặt lịch.

4. Tìm kiếm & Truy vấn

- Tìm bệnh nhân theo ID hoặc tên.

- Tìm bác sĩ theo ID hoặc chuyên khoa.

- Tìm lịch hẹn theo ngày, bệnh nhân hoặc bác sĩ.

5. Xử lý Dữ liệu

- Lưu danh sách bệnh nhân, bác sĩ, lịch hẹn ra file (patients.txt, doctors.txt, appointments.txt).

- Nạp dữ liệu từ file khi khởi động chương trình.

- (Nâng cao) Kết nối cơ sở dữ liệu (SQLite/MySQL).

6. Tính năng bổ sung (Nâng cao, Phase 4+)

- Gán bác sĩ chính cho mỗi bệnh nhân.

- Lưu lịch sử khám bệnh của bệnh nhân (các lần khám, chẩn đoán).

- Xuất báo cáo (ví dụ: tất cả bệnh nhân của bác sĩ X trong tuần này).

- Đăng nhập (quản trị viên / bác sĩ).

- Nhắc nhở lịch hẹn.