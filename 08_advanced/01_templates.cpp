#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max int: " << maximum(10, 20) << endl;
    cout << "Max double: " << maximum(3.5, 2.1) << endl;
    cout << "Max char: " << maximum('a', 'z') << endl;
    return 0;
}
