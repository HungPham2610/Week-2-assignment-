# Bài 7: Account – Lớp Tài khoản

## Yêu cầu
- Thuộc tính: `accountNumber`, `balance`
- Phương thức:
  - `deposit()`
  - `withdraw()`
  - `displayBalance()`

## Cấu trúc code
```cpp
class Account {
private:
    string accountNumber;
    double balance;
public:
    void deposit(double amount);
    void withdraw(double amount);
    void displayBalance() const;
};
# Hướng dẫn biên dịch & chạy
g++ Account.cpp -o Account
./Account