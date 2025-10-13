// Betty Gakii Kinge
// bcs-03-0104/2025
// Description: Calculate simple interest and purchase discount

#include <iostream>
using namespace std;

// function prototypes
float simple_interest(float rate, int time, int principal);
double purchase(int amount);

int main() {
    //  Simple Interest 
    float s_interest, rate;
    int time, principal;

    cout << "Enter rate, time and principal: " << endl;
    cin >> rate >> time >> principal;

    s_interest = simple_interest(rate, time, principal);
    cout << "The simple interest is: " << s_interest << endl;

    //  Purchase Discount 
    int amount;
    cout << "Enter the amount of purchase: ";
    cin >> amount;

    double finalAmount = purchase(amount);
    cout << "The final amount to pay = " << finalAmount << endl;

    return 0;
}

// function definition for simple interest
float simple_interest(float rate, int time, int principal) {
    float interest;
    interest = (principal * rate * time) / 100.0; // formula
    return interest;
}

// function definition for purchase discount
double purchase(int amount) {
    double discount;
    if (amount < 1000) {
        discount = 0;// no discount
    } else if (amount >= 1000 && amount <= 5000) {
        discount = amount * 0.05;//5% discount
    } else if(amount >= 5000){ 
        discount = amount * 0.1;//10% discount
    }
    double finalAmount = amount - discount;
    return finalAmount;
}
