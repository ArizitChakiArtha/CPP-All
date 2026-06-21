#include <iostream>
using namespace std;

template <typename T>
class Box {
private:
    T value;

public:
    explicit Box(T v) : value(v) {}

    T getValue() const {
        return value;
    }
};

int main() {
    Box<int> intBox(100);
    Box<string> stringBox("C++ Template");

    cout << intBox.getValue() << endl;
    cout << stringBox.getValue() << endl;
    return 0;
}
