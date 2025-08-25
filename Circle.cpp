#include <iostream>
#include <cmath>
#include <string>
double M_PI = 3.14159265358979323846; // Định nghĩa hằng số Pi nếu không có sẵn trong cmath
using namespace std;

class Circle {
private:
    double radius;
    string color;
public:
    Circle(double r = 1.0, string c = "blue") : radius(r), color(c) {} // Constructor với giá trị mặc định
    bool isValid() const { return radius > 0; } // Kiểm tra bán kính hợp lệ
    double circumference() const { return 2 * M_PI * radius; } // Chu vi
    double area() const { return M_PI * radius * radius; } // Diện tích
    string getColor() const { return color; } // Lấy màu sắc
};

int main() {
    Circle c1(5.0, "red");
    if (!c1.isValid()) { cerr << "Ban kinh khong hop le!\n"; return 1; }
    cout << "Color: " << c1.getColor() << "\n"; // Hiển thị màu sắc
    cout << "Perimeter: " << c1.circumference() << "\n";
    cout << "Area: " << c1.area() << "\n";
    return 0;
}
