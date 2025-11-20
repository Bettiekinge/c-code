#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	int a;
	int b;
	int c;
    ofstream myfile("C:\\Users\\Admin\\Desktop\\CPP CODES\\array_3D.txt");
    int price[1][3][3]={
	{
	{7,28,44},
	{12,97,87},
	{65,54,63}
	}
	};
	
	for (a=0;a<1;a++){
		for(b=0;b<3;b++){
			for( c=0;c<3;c++){
				cout<<price[a][b][c]<<endl;
				myfile<<price[a][b][c]<<endl;
			}
		}
	}
	return 0; 
	      
}