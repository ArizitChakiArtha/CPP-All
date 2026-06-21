#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override { return width * height; }
};

class Circle : public Shape {
private:
    double radius;
public:
    explicit Circle(double r) : radius(r) {}
    double area() const override { return 3.1416 * radius * radius; }
};

int main() {
    vector<unique_ptr<Shape>> shapes;
    shapes.push_back(make_unique<Rectangle>(5, 4));
    shapes.push_back(make_unique<Circle>(3));

    for (const auto& shape : shapes) {
        cout << "Area: " << shape->area() << endl;
    }

    return 0;
}
