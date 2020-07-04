#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\tFind Cube till 20"<<endl;
	cout<<"Enter a number to find Cubes from: ";
	cin>>n;
	while(n<=20){
	cout<<"The Cube of "<<n<<" is: "<<n*n*n<<endl;
	n++;
	}
	return 0;
}
