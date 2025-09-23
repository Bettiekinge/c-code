// Betty Gakii Kinge
// bcs-03-0104/2025
//description :calculate surfacearea and volume using object and class
#include <iostream>
using namespace std;

class Cylinder {
public:
    double height, radius;
    const double pi = 3.14;

    double surfaceArea() {
        return (2 * pi * radius * radius) + (2 * pi * radius * height);
    }

    double volume() {
        return pi * radius * radius * height;
    }
};

int main() {
    Cylinder cylinder1;

    cout << "Enter height: ";
    cin >> cylinder1.height;

    cout << "Enter radius: ";
    cin >> cylinder1.radius;

    double surfaceArea = cylinder1.surfaceArea();
    double volume = cylinder1.volume();

    cout << "The surface area of the cylinder: " << surfaceArea << endl;
    cout << "The volume of the cylinder: " << volume << endl;

    return 0;
}

