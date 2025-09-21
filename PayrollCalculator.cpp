// Betty Gakii Kinge
// bcs-03-0104/2025
// Description:Calculates weekly pay, taxes, and net income based on hours worked and hourly wage.

#include <iostream>
using namespace std;

// Function prototypes
double calculateGrosspay(double hours, double rate);
double calculateTax(double grosspay);

int main() {
    double hours, rate;

    cout << "Enter hours worked in a week: ";
    cin >> hours;

    cout << "Enter hourly wage: ";
    cin >> rate;

    // Function calls
    double grosspay = calculateGrosspay(hours, rate);
    double tax = calculateTax(grosspay);
    double netpay = grosspay - tax;

    cout << "Gross pay: $" << grosspay << endl;
    cout << "Taxes: $" << tax << endl;
    cout << "Net pay: $" << netpay << endl;

    return 0;
}

// Function to calculate gross pay
double calculateGrosspay(double hours, double rate) {
    double grosspay;
    if (hours <= 40) {
        grosspay = hours * rate;
    } else {
        double overtimeHours = hours - 40;
        grosspay = (40 * rate) + (overtimeHours * rate * 1.5);
    }
    return grosspay;
}

// Function to calculate tax
double calculateTax(double grosspay) {
    double tax;
    if (grosspay <= 600) {
        tax = grosspay * 0.15;
    } else {
        tax = (600 * 0.15) + ((grosspay - 600) * 0.20);
    }
    return tax;
}
