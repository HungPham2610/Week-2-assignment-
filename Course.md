# Bài 9: Course – Lớp Khóa học

## Yêu cầu
- Thuộc tính: `courseName`, `courseCode`, `credits`
- Phương thức:
  - `displayInfo()`
  - `isHighCredit()`

## Cấu trúc code
```cpp
class Course {
private:
    string courseName, courseCode;
    int credits;
public:
    void displayInfo() const;
    bool isHighCredit() const;
};
# Hướng dẫn biên dịch & chạy
g++ Course.cpp -o Course
./Course