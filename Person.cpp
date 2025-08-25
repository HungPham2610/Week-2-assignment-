#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string address;
    string phoneNumber;
public:
    Person(string n="John Doe", int a=20, string addr="123 Main St", string phone="0123456789") // Constructor với giá trị mặc định
        : name(n), age(max(0,a)), address(addr), phoneNumber(phone) {}

    void displayInfo() const {
        cout << "Name: " << name << "\nAge: " << age
             << "\nAddress: " << address << "\nPhone: " << phoneNumber << "\n"; // Hiển thị thông tin cá nhân
    }
    bool isAdult() const { return age >= 18; }
    void move(const string& newAddress) { if (!newAddress.empty()) address = newAddress; } // Chuyển nhà
    void greet() const { cout << "Hello, my name is " << name << ".\n"; } // Lời chào
};

int main() {
    Person p("Nguyen Minh", 19, "HCM", "0909xxxxxx"); // Khởi tạo đối tượng p với tên "Nguyen Minh", 19 tuổi, địa chỉ "HCM", số điện thoại "0909xxxxxx"
    p.greet();
    p.displayInfo();
    p.move("Thu Duc, HCM"); // Chuyển nhà
    cout << "Sau khi chuyen nha:\n";
    p.displayInfo();
    cout << (p.isAdult() ? "La nguoi truong thanh\n" : "Chua du 18 tuoi\n"); // Kiểm tra tuổi
    return 0;
}
