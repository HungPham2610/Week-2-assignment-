#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Account {
private:
    string accountNumber;
    string ownerName;
    double balance;
    static constexpr double MIN_BAL = 100000.0; // 100k VND
public:
    Account(string acc = "123456789", string owner = "Nguyen Van A", double bal = 1000000.0) // Constructor với giá trị mặc định
        : accountNumber(acc), ownerName(owner), balance(bal) {}

    bool deposit(double amount) {
        if (amount <= 0) return false; // Số tiền nạp phải dương
        balance += amount; // Số tiền nạp được cộng vào balance
        return true;
    }
    bool withdraw(double amount) {
        if (amount <= 0) return false; // Số tiền rút phải dương
        if (balance - amount < MIN_BAL) return false; // Giữ tối thiểu 100k VND
        balance -= amount; //  Số tiền rút được trừ vào balance
        return true;
    }
    void displayBalance() const {
        cout << ownerName << " | Acc#: " << accountNumber
             << " | Balance: " << fixed << setprecision(0) << balance << " VND\n"; // Hiển thị balance với 0 chữ số thập phân
    }
};

int main() {
    Account acc("987654321", "Pham Gia Hung", 500000); // Khởi tạo đối tượng acc với tên "Pham Gia Hung" và số dư 500,000 VND
    acc.displayBalance();
    cout << (acc.deposit(200000) ? "Deposit OK\n" : "Deposit FAILED\n"); // Nạp 200,000 VND
    acc.displayBalance();
    cout << (acc.withdraw(700000) ? "Withdraw OK\n" : "Withdraw FAILED (giu >= 100k)\n"); // Rút 700,000 VND
    acc.displayBalance(); // Rút 700,000 VND
    return 0;
}
