#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
private:
    string name;
    double grade; // 0..10
public:
    Student(string n = "John", double g = 7.5) : name(n), grade(g) {} // Constructor với giá trị mặc định

    void setGrade(double g) {
        if (g >= 0.0 && g <= 10.0) grade = g; // Kiểm tra điểm hợp lệ
    }
    bool isAbove(double avg) const { return grade > avg; }

    void displayInfo() const {
        cout << "Name: " << name << "\n"
             << "Grade: " << fixed << setprecision(2) << grade << "\n"; // Hiển thị điểm với 2 chữ số thập phân
    }
};

int main() {
    Student s1("Hung", 8.2);
    s1.displayInfo();
    cout << (s1.isAbove(7.0) ? "Tren trung binh\n" : "Khong tren trung binh\n"); // Kiểm tra điểm trung bình
    return 0;
}
