#include<iostream>
using namespace std;
int main()
{
	double percent;
	cout<<"Enter your percentage: ";
	cin>>percent;
	if(percent>=100.1 || percent<=1.1){
		cout<<"Please enter percent between 0-100.";
	}
	else if(percent<=40){
		cout<<"Sorry, but you failed.";
	}
	else if(percent<=60){
		cout<<"Congratulation, you are passed and got 'C' grade.";
	}
	else if(percent<=72){
		cout<<"Congratulation, you are passed and got 'B' grade.";
	}
	else if(percent<=87){
		cout<<"Congratulation, you are passed and got 'A' grade.";
	}
	else{
		cout<<"Congratulation, you are passed and got 'A+' grade.";
	}
	
	return 0;	
}
