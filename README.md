# HMI-Automotive

HMI-Automotive là dự án Human-Machine Interface (HMI) cho xe ô tô, bao gồm **Cluster** (đồng hồ tốc độ, nhiên liệu, vòng tua…) và **IVI** (In-Vehicle Infotainment) giao diện, giao tiếp trực tiếp với **ESP32** để thu thập dữ liệu từ xe và điều khiển các thiết bị ngoại vi.

---

## Mục tiêu

- Hiển thị thông tin xe (tốc độ, vòng tua, nhiên liệu, cảnh báo…) trên màn hình Cluster.
- Quản lý và hiển thị hệ thống giải trí, thông tin điều hướng, và các thông báo trên IVI.
- Kết nối với ESP32 qua giao thức **USB-UART**  để nhận dữ liệu cảm biến và gửi lệnh điều khiển.
- Tạo giao diện trực quan, dễ sử dụng cho người lái.

---

## Tính năng

### Cluster HMI

- Hiển thị tốc độ xe, vòng tua máy, mức nhiên liệu, nhiệt độ động cơ.
- Hiển thị các cảnh báo quan trọng: check engine, ABS, dầu, nhiệt độ động cơ…

### IVI HMI

- Phát nhạc, xem video, định vị GPS.
- Hiển thị dữ liệu cảm biến thực tế từ ESP32.
- Điều khiển các thiết bị giải trí và phụ trợ trong xe.

### ESP32 Communication

- Gửi dữ liệu cảm biến từ xe lên HMI.
- Nhận lệnh từ HMI để điều khiển các thiết bị: đèn, còi, quạt, relay…
- Hỗ trợ giao thức Serial (UART) hoặc TCP/IP.