#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int n;
	cout<<"SUJAL SUVA "<<endl;
	cout<<"220130318034"<<endl;
	cout<<"Enter Number to Find Factorial ::";
	cin>>n;
	
	fact(n);
	
	
	return 0;	
}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	
	cout<<"The factorial is ::"<<f;
}
