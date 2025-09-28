// betty gakii kinge
// bcs-03-0104/2025
// 28-9-2025

#include <iostream>
using namespace std;

class Addition {
public:
    int num1, num2, num3;
    // Member function to calculate and return the product
    int calculateProduct() {
        return num1 * num2 * num3;
    }
};

int main() {
    Addition num; 
    int product;
    num.num1 = 22;
    num.num2 = 30;
    num.num3 = 50;
    product = num.calculateProduct();

    cout << "The product of the numbers = " << product << endl; 

    return 0;
}