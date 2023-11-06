//Write a C++ program to demonstrate order of constructor calls in Multiple Inheritance.
#include<iostream>
using namespace std;
class A 
{
	public :
	A(){
	cout<<"This is Class A :)"<<endl;
	}
};
class B
{
	public:
	
	B(){
	cout<<"This is Class B :)"<<endl;
	}
};

class C : public B, public A{};


int main()
{
	C c;
	cout<<"SUJAL SUVA "<<endl;
	cout<<"220130318034"<<endl;
	
	return 0;
}
