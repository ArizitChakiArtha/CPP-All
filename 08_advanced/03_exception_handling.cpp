#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double a, double b) {
    if (b == 0) {
        throw invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}

int main() {
    try {
        cout << divide(10, 2) << endl;
        cout << divide(10, 0) << endl;
    } catch (const exception& ex) {
        cout << "Error: " << ex.what() << endl;
    }

    return 0;
}
