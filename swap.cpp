#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"\tSwapping of numbers"<<endl;
	cout<<"Enter two numbers for a and b: ";
	cin>>a>>b;
	c=a;
	a=b;
	b=c;
	cout<<"Now, the values after swapping are"<<endl;
	cout<<"a: "<<a<<"\tb: "<<b;
	return 0;
}
