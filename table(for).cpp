#include<iostream>
using namespace std;
int main()
{
	int n,limit;
	cout<<"Table of: ";
	cin>>n;
	for(limit=1;limit<=10;limit++){
		cout<<n<<" x "<<limit<<" = "<<n*limit<<"\n";
	}	
	return 0;	
}
