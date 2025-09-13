#include <iostream>
using namespace std;

int main()
{
    double amount,discount,finalamount;
    cout<<"enter the amount of purchase:";
    cin>>amount;
    if (amount <1000){discount=amount*0;}
    else if (amount >=1000 && amount <=5000){discount=amount*0.1;}
    else if(amount>=5000){discount=amount*0.2;}
    finalamount=amount-discount;
    cout<<"amount of purchase:"<<amount<<endl;
    cout<<"discount given:"<<discount<<endl;
    cout<<"finalamount client to pay:"<<finalamount<<endl;
    return 0;
}
