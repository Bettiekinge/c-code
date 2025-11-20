#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int i;
	int j;
ofstream Myfile ("C:\\Users\\Admin\\Desktop\\CPP CODES\\array_2D.txt");
// declare 
int score[2][3]={
{20,30,40},
{50,60,70}
};

	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			cout<<score[i][j]<<endl;
			Myfile<<score[i][j]<<endl;		
		}
	}
	return 0;
}
