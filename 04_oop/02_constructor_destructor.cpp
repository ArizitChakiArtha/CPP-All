#include <iostream>
using namespace std;

class Book {
private:
    string title;

public:
    explicit Book(string t) : title(move(t)) {
        cout << "Constructor called for " << title << endl;
    }

    ~Book() {
        cout << "Destructor called for " << title << endl;
    }

    void show() const {
        cout << "Book title: " << title << endl;
    }
};

int main() {
    Book book("C++ Basics");
    book.show();
    return 0;
}
