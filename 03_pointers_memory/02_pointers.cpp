#include <iostream>
using namespace std;

int main() {
    int x = 100;
    int* ptr = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer stores address: " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    *ptr = 200;
    cout << "Updated x: " << x << endl;

    return 0;
}
