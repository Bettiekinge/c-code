//c++ 1d array
#include <iostream>
#include <fstream>
using namespace std;
int main(){
  int i; 
  int sum =0;
  int average;
  ofstream Myfile("C:\\Users\\Admin\\Desktop\\CPP CODES\\array.txt");

double GPA[5]={3.0,4.5,2.3,4.8,4.0};
for(i=0;i<5;i++){
    cout<<GPA[i]<<endl;
    sum += GPA[i];
    average =sum/5;
}
cout<<"The sum is "<<sum<<endl;
cout<<"The average is "<<average<<endl;
    return 0;
}