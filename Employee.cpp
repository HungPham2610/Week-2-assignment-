#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee {
private:
    string name;
    double salary; // gross / month
public:
    Employee(string n = "Alice", double s = 15000000.0) : name(n), salary(s) {}

    double tax() const { // 10% for income over 11,000,000 VND
        double excess = salary > 11000000.0 ? (salary - 11000000.0) : 0.0;
        return excess * 0.10;
    }
    double netIncome() const {
        return salary - tax();
    }

    void displayInfo() const {
        cout << "Name  : " << name << "\n"
             << "Gross : " << fixed << setprecision(0) << salary << " VND\n" // Hiển thị lương với 0 chữ số thập phân
             << "Tax   : " << tax() << " VND\n"
             << "Net   : " << netIncome() << " VND\n"; // Hiển thị lương ròng với 0 chữ số thập phân
    }
};

int main() {
    Employee e1("Bob", 18000000); // Khởi tạo đối tượng e1 với tên "Bob" và lương 18,000,000 VND
    e1.displayInfo();
    return 0;
}
