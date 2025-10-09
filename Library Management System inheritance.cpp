// Betty Gakii Kinge
// bcs-03-0104/2025
//9-10-2025
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
  class LibraryMembers:public Person{
      private:
      int memberID;
      int booksBorrowed;
      public:
      LibraryMembers(string n,int membid,int bookb){
          setName(n);
          memberID=membid;
          booksBorrowed=bookb;}
                int getMemberID(){
              return memberID;}
              int  getbooksBorrowed(){
                  return booksBorrowed;}
              };
    class PremiumMember: public LibraryMembers{
        private:
        double membersFee;
        public:
        PremiumMember(string n,int membid,int bookb,double membfee):LibraryMembers(n,membid,bookb){
            membersFee=membfee;}
        double getMembersFee(){
            return membersFee;}
        };
        int main(){
            PremiumMember enter("Betty",98765,7,1250);
            cout <<"Members name: "<<enter.getName()<<endl;
            cout <<"MemberID: "<<enter.getMemberID()<<endl;
            cout <<"The number of booksBorrowed: "<<enter.getbooksBorrowed()<<endl;
            cout <<"MemberFee Balance:ksh "<<enter.getMembersFee()<<endl;
            return 0;
        }
        