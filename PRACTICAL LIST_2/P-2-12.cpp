// CPP Program to demonstrate Default Arguments
#include<iostream>
using namespace std;
int area(float r,float pi=3.14)
{
	float a;
	a=pi*r*r;
	cout<<"Area Of Circle is ::"<<a;
}
int main()
{
	int r;
	cout<<"SUJAL SUVA "<<endl;
	cout<<"220130318034"<<endl;
	cout<<"Enter The radius of The Circle ::";
	cin>>r;
	
	area(r);

	
	return 0;
	
}

