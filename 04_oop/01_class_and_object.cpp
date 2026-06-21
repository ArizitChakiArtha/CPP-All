#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int id;

    void display() const {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Student student;
    student.name = "Koushik";
    student.id = 101;
    student.display();
    return 0;
}
