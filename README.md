# IoTAP-esp32-ldr-test
Bài tập tuần 4 môn Lập trình IoT

# Dự án Kiểm tra Quang trở (LDR) với ESP32 trên PlatformIO

## Mô tả sơ lược
Dự án này kiểm tra hoạt động của quang trở (LDR) kết nối với ESP32 qua chân ADC (GPIO34). Code đọc giá trị độ sáng tương đối (0-4095), in ra cổng UART, và hỗ trợ vẽ đồ thị thời gian thực bằng Teleplot (extension VSCode). 

Dựa trên thiết kế phần cứng tiêu chuẩn: LDR và điện trở 10kΩ tạo mạch phân áp, nối vào ADC để đo cường độ sáng. Dự án dùng để kiểm tra, debug phần cứng trong các bài giảng về thiết kế IoT.

## Cấu trúc
- `platformio.ini`: Cấu hình PIO cho ESP32.
- `src/main.cpp`: Code chính đọc ADC và in UART.

## Hướng dẫn sử dụng
1. Kết nối LDR theo sơ đồ:
   <img width="795" height="727" alt="Screenshot 2025-10-23 201409" src="https://github.com/user-attachments/assets/6b94f3ec-53f6-464c-a4bf-1b29a1e296f0" />
3. Build và upload bằng PlatformIO.
4. Xem UART qua Serial Monitor.
5. Vẽ đồ thị: Cài Teleplot, chạy và chọn cổng serial.
