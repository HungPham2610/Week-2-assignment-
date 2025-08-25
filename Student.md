# Bài 2: Student – Lớp Sinh viên

## 📝 Yêu cầu
- Xây dựng class `Student` với:
  - Thuộc tính: `name`, `grade`
  - Phương thức: `displayInfo()`
- Viết hàm `isAbove()` để kiểm tra điểm trên trung bình.

## 📂 Cấu trúc code
```cpp
class Student {
private:
    string name;
    double grade;
public:
    Student(string n, double g);
    bool isAbove(double avg) const;
    void displayInfo() const;
};
