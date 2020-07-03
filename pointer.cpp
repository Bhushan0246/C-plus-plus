#include<iostream>
using namespace std;
int  main() 
{
	int a,*p,**n;
	cout<<"here is a variable a";
	p=&a;
	cout<<endl<<"The address of variable a is: "<<p;
	*n=&*p;
	cout<<endl<<"The address of pointer p is: "<<n;
	return 0;
}
