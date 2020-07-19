#include<iostream>
using namespace std;
int  main() 
{
	int a=4,*p;
	cout<<"Here is a variable a";
	p=&a;
	cout<<endl<<"The address of variable a is: "<<p<<endl;
	*p=a;
	cout<<"The value of a is: "<<a<<endl;
	return 0;
}
