#include<iostream>
using namespace std;
class Shape
{
	public:
		float height,base;
	public:
		void get_shape();
		void put_shape();
		
		
		
};

void Shape::get_shape()
{
	cout<<"Enter The Height ::";
	cin>>height;
	cout<<"Enter The Base ::";
	cin>>base;
}

void Shape::put_shape()
{
	
	cout<<endl<<"The Height of Shape is ::"<<height<<endl;
	cout<<"The Base of Shape is ::"<<base<<endl;
	cout<<endl<<height<<" X "<<base<<endl;
		
}
int main()
{
	cout<<"SUJAL SUVA "<<endl;
	cout<<"220130318034"<<endl;
	cout<<"-------------"<<endl;
	Shape s;
	s.get_shape();
	s.put_shape();
}
