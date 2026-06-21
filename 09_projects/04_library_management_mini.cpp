#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
private:
    int id;
    string title;
    bool issued;

public:
    Book(int bookId, string bookTitle) : id(bookId), title(move(bookTitle)), issued(false) {}

    int getId() const { return id; }

    void issue() { issued = true; }
    void returnBook() { issued = false; }

    void display() const {
        cout << id << " | " << title << " | " << (issued ? "Issued" : "Available") << endl;
    }
};

int main() {
    vector<Book> books;
    books.emplace_back(1, "C++ Primer");
    books.emplace_back(2, "Data Structures");
    books.emplace_back(3, "Algorithms");

    books[1].issue();

    cout << "Library Books:" << endl;
    for (const auto& book : books) {
        book.display();
    }

    return 0;
}
