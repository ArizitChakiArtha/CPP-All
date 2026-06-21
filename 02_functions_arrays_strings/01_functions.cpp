#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet("Student");
    cout << "Sum: " << add(10, 20) << endl;
    return 0;
}
