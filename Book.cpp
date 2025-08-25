#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title; // Tiêu đề sách
    string author; // Tác giả
public: 
    Book(string t = "C++ Programming", string a = "Bjarne Stroustrup") // Constructor với giá trị mặc định
        : title(t), author(a) {}

    void displayInfo() const {
        cout << "Title : " << title  << "\n" // Hiển thị tiêu đề    
             << "Author: " << author << "\n"; // Hiển thị tác giả
    }
};

int main() {
    Book b1; // Sử dụng constructor với giá trị mặc định
    b1.displayInfo(); // Hiển thị thông tin sách với giá trị mặc định
    return 0;
}
