#include<iostream>
#include<cmath>
using namespace std;

int main()
{
float n;
cout<<"\tFind Cube Root"<<endl;
cout<<"Enter a number to find cube root from: ";
cin>>n;
while(n<=20){
cout<<"The cube root of "<<n<<" is: "<<cbrt(n)<<endl;
n++;
}
return 0;
}

