# Bài 5: Rectangle – Lớp Hình chữ nhật

## Yêu cầu
- Xây dựng class `Rectangle` với:
  - Thuộc tính: `width`, `height`
  - Phương thức: `calculateArea()` trả về diện tích

## Cấu trúc code
```cpp
class Rectangle {
private:
    int width, height;
public:
    Rectangle(int w, int h);
    int area() const;
};
# Hướng dẫn biên dịch & chạy
g++ Rectangle.cpp -o Rectangle
./Rectangle