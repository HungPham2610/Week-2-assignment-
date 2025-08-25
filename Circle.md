# Bài 6: Circle – Lớp Hình tròn

## Yêu cầu
- Thuộc tính: `radius`
- Phương thức:
  - `circumference()` → chu vi
  - `area()` → diện tích

## Cấu trúc code
```cpp
class Circle {
private:
    double radius;
public:
    Circle(double r);
    double circumference() const;
    double area() const;
};

# Hướng dẫn biên dịch & chạy
g++ Circle.cpp -o Circle
./Circle