// Betty Gakii Kinge
// bcs-03-0104/2025
//2-10-2025
//description:This program demonstrates a C++ class car with data members, a constructor, and member functions to display car details and update its mileage when it is driven.
#include <iostream>
using namespace std;
//class named car
class car{
    //private data members 
    private:
    string brand;
    string model;
    float price ;
    int mileage;
    //a constructor 
    public: 
    car(string a,string b,float c,int d){
        brand =a;
        model=b;
        price=c;
        mileage =d;
    }
    //public member function named display
    void display(){
        cout<<"Brand - "<<brand <<", Model - "<<model <<", Price - "<<price <<", Mileage - "<<mileage<<endl;
    }
    //public member function named drive with integer parameter distance driven
  void drive(int drivenD) {
        mileage += drivenD;
        cout << "distance driven " << drivenD << "   New mileage: " << mileage <<"\n"<< endl;
    }
    
};
int main(){
    car obj("toyota","corolla",2000,5000);
     obj.display(); 
     //update 150 miles
    obj.drive(150);          
    obj.display(); 
    //update 300 miles
     obj.drive(300);          
    return 0;
}