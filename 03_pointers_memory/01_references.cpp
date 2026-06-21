#include <iostream>
using namespace std;

void increaseByTen(int& value) {
    value += 10;
}

int main() {
    int number = 5;
    increaseByTen(number);
    cout << "Number after function call: " << number << endl;
    return 0;
}
