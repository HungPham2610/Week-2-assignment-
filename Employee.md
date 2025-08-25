# Bài 4: Employee – Lớp Nhân viên

## Yêu cầu
- Xây dựng class `Employee` với:
  - Thuộc tính: `name`, `salary`
  - Phương thức: `displayInfo()`

## Cấu trúc code
```cpp
class Employee {
private:
    string name;
    double salary;
public:
    Employee(string n, double s);
    void displayInfo() const;
};

# Hướng dẫn biên dịch & chạy
g++ Employee.cpp -o Employee
./Employee