// Betty Gakii Kinge
// bcs-03-0104/2025
//13-10-2025
//Description:The program creates a simple class hierarchy where each level adds new features while inheriting existing ones
#include <iostream>
using namespace std;
class Person{
    protected:
    string name;
    public:
   void setName(string n){
        name=n;
    }
    string getName(){
        return name;
    }
};
class LibraryMember:public Person{
    private:
    int memberID;
    int booksBorrowed;
    public:
    LibraryMember(string n,int membID,int booksB){
      setName(n);  
        memberID= membID;
        booksBorrowed=booksB;
    }
    int getMemberID(){
        return memberID;
    }
    int getBooksBorrowed(){
        return booksBorrowed;
    }
};
class PremiumMember:public LibraryMember{
    private:
    double membershipFee;
    public:
    PremiumMember(string n,int membID,int booksB,double membFe):LibraryMember(n,membID,booksB){
        membershipFee=membFe;
}
double getMembershipFee(){
    return membershipFee;
}
};
int main(){
    PremiumMember cat("Betty",467657,4,5545);
    cout<<"member name: "<< cat.getName() <<endl;
    cout<<" member ID: "<< cat.getMemberID()<<endl;
    cout<<"booksborrowed: "<< cat.getBooksBorrowed() <<endl;
    cout<<"membershipFee: "<< cat.getMembershipFee() <<endl;
    return 0;
}