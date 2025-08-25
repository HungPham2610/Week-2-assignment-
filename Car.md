# Bài 1: Car – Lớp Xe hơi

## Yêu cầu
- Xây dựng class `Car` với:
  - Thuộc tính: `brand`, `year`
  - Phương thức: `displayInfo()` in thông tin xe
- Viết chương trình tạo một đối tượng `Car` và hiển thị thông tin.

## Cấu trúc code
```cpp
class Car {
private:
    string brand;
    int year;
public:
    Car(string b = "Toyota", int y = 2020);
    void displayInfo() const;
};

# Hướng dẫn biên dịch & chạy
g++ Car.cpp -o Car
./Car

    