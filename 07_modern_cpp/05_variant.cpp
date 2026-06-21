#include <iostream>
#include <variant>
#include <string>
using namespace std;

int main() {
    variant<int, double, string> value;

    value = 10;
    cout << "Integer: " << get<int>(value) << endl;

    value = 3.14;
    cout << "Double: " << get<double>(value) << endl;

    value = string("Hello variant");
    cout << "String: " << get<string>(value) << endl;

    return 0;
}
