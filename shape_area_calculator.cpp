// Betty Gakii Kinge
// bcs-03-0104/2025
//5-10-2025
//Description: This program creates shapes rectangle and circle that inherit color from a base Shape class and calculate their areas
#include <iostream>
using namespace std;

// (i) Base class Shape
class Shape {
protected:
    string color;

public:
    // Constructor
    Shape(string c) {
        color = c;
    }
    
    // Set color
    void setColor(string c) {
        color = c;
    }
    
    // Get color
    string getColor() {
        return color;
    }
};

// (ii) Derived class Rectangle
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    // Constructor
    Rectangle(float l, float w, string c) : Shape(c) {
        length = l;
        width = w;
    }
    
    // Area function
    float area() {
        return length * width;
    }
};

// (iii) Derived class Circle
class Circle : public Shape {
private:
    float radius;

public:
    // Constructor
    Circle(float r, string c) : Shape(c) {
        radius = r;
    }
    
    // Area function
    float area() {
        return 3.14159 * radius * radius;
    }
};

// (iv) main() function
int main() {
    // Create Rectangle object
    Rectangle rect(10, 5, "Red");
    
    // Create Circle object
    Circle circle(7, "Blue");
    
    // Display rectangle details
    cout << "Rectangle - Color: " << rect.getColor() << ", Area: " << rect.area() << endl;
    
    // Display circle details
    cout << "Circle - Color: " << circle.getColor() << ", Area: " << circle.area() << endl;
    
    return 0;
}