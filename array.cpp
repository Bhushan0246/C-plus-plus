#include<iostream>

using namespace std;

int main()
{
int n;
cout<<"Enter index number till where you want to display Array: ";
cin>>n;
string languages[]={"HTML and CSS","JavaScript","C","C++","C#","Java","Phython","XML","SQL","PHP","Machine Learning","Raspberry Pi"};
cout<<"Types of languages: "<<endl;
for(int i=0;i<=n;i++){
cout<<i<<". "<<languages[i]<<endl;
}
return 0;
}

