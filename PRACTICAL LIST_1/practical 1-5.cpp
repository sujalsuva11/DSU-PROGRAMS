//print negative elements in array
#include<iostream>
using namespace std;
int main()
{
	int i,n,a[10];
	cout<<"SUJAL SUVA "<<endl;
	cout<<"220130318034"<<endl;
	cout<<"Enter Size of Array ::";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	
	cout<<"Negative Elements are ::";
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			cout<<a[i]<<",";
		}
	}
	
	return 0;
}

