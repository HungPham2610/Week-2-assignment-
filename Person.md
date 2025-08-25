# Bài 10: Person 

## Yêu cầu
- Thuộc tính: `name`, `age`, `address`
- Phương thức:
  - `displayInfo()`
  - `isAdult()`

## Cấu trúc code
```cpp
class Person {
private:
    string name;
    int age;
    string address;
public:
    void displayInfo() const;
    bool isAdult() const;
};
# Hướng dẫn biên dịch & chạy
g++ Person.cpp -o Person
./Person