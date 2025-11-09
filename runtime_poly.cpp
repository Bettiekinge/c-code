#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area calculation" << endl;
    }
    virtual ~Shape() {} 
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void area() override {
        cout << "Rectangle Area: " << length * width << endl;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void area() override {
        cout << "Circle Area: " << 3.14159 * radius * radius << endl;
    }
};

int main() {
    Shape* shape1 = new Rectangle(5, 3);
    Shape* shape2 = new Circle(4);
    
    shape1->area();  
    shape2->area();  
    
    delete shape1;
    delete shape2;

    return 0;
}
