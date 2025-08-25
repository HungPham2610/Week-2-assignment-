# Bài 3: Book – Lớp Sách

## Yêu cầu
- Xây dựng class `Book` với:
  - Thuộc tính: `title`, `author`
  - Phương thức: `displayInfo()`

## Cấu trúc code
```cpp
class Book {
private:
    string title;
    string author;
public:
    Book(string t, string a);
    void displayInfo() const;
};

# Hướng dẫn biên dịch & chạy
g++ Book.cpp -o Book
./Book
