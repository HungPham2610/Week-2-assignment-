#include <iostream>
#include <string>
using namespace std;

class Course {
private:
    string courseName, courseCode, instructorName; // Tên môn học, mã môn học, tên giảng viên
    int credits;
public:
    Course(string n="OOP", string code="CS202", int c=4, string inst="Dr. Smith") // Constructor với giá trị mặc định
        : courseName(n), courseCode(code), instructorName(inst), credits(c) {}

    void displayInfo() const {
        cout << "Course Name: " << courseName << "\n" // Hiển thị thông tin môn học
             << "Course Code: " << courseCode << "\n" // Mã môn học
             << "Credits: " << credits << "\n" // Số tín chỉ
             << "Instructor: " << instructorName << "\n"; // Tên giảng viên
    }
    bool isHighCredit() const { return credits > 3; }
    bool isLabRequired() const { return credits > 4; }
};

int main() {
    Course c1("Data Structures", "CS204", 5, "Dr. Lee");
    c1.displayInfo();
    cout << (c1.isHighCredit() ? "High credit course\n" : "Normal credit\n"); // Kiểm tra tín chỉ
    cout << (c1.isLabRequired() ? "Lab required\n" : "No lab\n"); // Kiểm tra yêu cầu lab
    return 0;
}
