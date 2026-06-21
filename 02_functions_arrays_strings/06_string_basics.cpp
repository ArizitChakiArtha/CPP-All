#include <iostream>
#include <string>
using namespace std;

int main() {
    string first = "C++";
    string second = "Programming";
    string full = first + " " + second;

    cout << full << endl;
    cout << "Length: " << full.length() << endl;
    cout << "First character: " << full[0] << endl;

    if (full.find("C++") != string::npos) {
        cout << "Found C++ inside the text." << endl;
    }

    return 0;
}
