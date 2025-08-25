# Bài 8: Laptop

## Yêu cầu
- Thuộc tính: `brand`, `model`, `ram`, `storage`
- Phương thức:
  - `displayInfo()`
  - `checkRAM(int requiredRAM)`

## Cấu trúc code
```cpp
class Laptop {
private:
    string brand, model;
    int ram, storage;
public:
    void displayInfo() const;
    void checkRAM(int requiredRAM) const;
};

# Hướng dẫn biên dịch & chạy
g++ Laptop.cpp -o Laptop
./Laptop