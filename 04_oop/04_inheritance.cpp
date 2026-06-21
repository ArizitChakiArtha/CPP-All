#include <iostream>
using namespace std;

class Animal {
public:
    void eat() const {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() const {
        cout << "Dog is barking." << endl;
    }
};

int main() {
    Dog dog;
    dog.eat();
    dog.bark();
    return 0;
}
