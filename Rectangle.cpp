#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle(int w = 5, int h = 10) : width(max(0, w)), height(max(0, h)) {} // Constructor với giá trị mặc định và kiểm tra kích thước hợp lệ
    int area() const { return width * height; } // Tính diện tích
    int perimeter() const { return 2 * (width + height); } // Tính chu vi
};

int main() {
    Rectangle r1(6, 9);
    cout << "Area: " << r1.area() << "\n"; // Hiển thị diện tích
    cout << "Perimeter: " << r1.perimeter() << "\n"; // Hiển thị chu vi 
    return 0;
}
