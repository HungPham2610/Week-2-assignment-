#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand; //  Nhãn hiệu xe
    int year; // Năm sản xuất
public:
    Car(string b = "Toyota", int y = 2020) : brand(b), year(y) {} // Constructor với giá trị mặc định

    void setBrand(const string& b) { brand = b; }
    void setYear(int y) { if (y > 1885) year = y; } // Kiểm tra năm sản xuất
    string getBrand() const { return brand; }
    int getYear() const { return year; }

    void displayInfo() const {
        cout << "Brand: " << brand << "\nYear: " << year << "\n";
    }
};

int main() {
    Car c1;                // Khởi tạo đối tượng c1 mặc định
    Car c2("Hyundai", 2023);

    c1.displayInfo();
    c2.displayInfo();

    // Nhập cá nhân hóa
    string b; int y;
    cout << "Nhap brand va year: ";
    if (cin >> b >> y) {
        Car c3(b, y);
        c3.displayInfo();
    } else {
        cerr << "Input khong hop le.\n";
    }
    return 0;
}
