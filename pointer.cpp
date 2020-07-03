#include<iostream>
using namespace std;
int  main() 
{
	int a,*p;
	cout<<"Enter a number: ";
	cin>>a;
	p=&a;
	cout<<endl<<"The address of variable a is: "<<p;
}
