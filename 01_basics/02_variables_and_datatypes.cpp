#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 22;
    double cgpa = 3.81;
    char grade = 'A';
    bool passed = true;
    string name = "Koushik";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << boolalpha << passed << endl;

    return 0;
}
