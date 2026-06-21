#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    string name;
    explicit Student(string n) : name(move(n)) {
        cout << "Student created: " << name << endl;
    }
    ~Student() {
        cout << "Student destroyed: " << name << endl;
    }
};

int main() {
    unique_ptr<Student> s1 = make_unique<Student>("Arko");
    cout << s1->name << endl;

    shared_ptr<Student> s2 = make_shared<Student>("Rahim");
    shared_ptr<Student> s3 = s2;

    cout << "Shared count: " << s2.use_count() << endl;
    return 0;
}
