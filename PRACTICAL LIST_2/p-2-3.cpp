#include<iostream>
using namespace std;
class temp
{
	public:
		// using class with scope resolution 
		void display();
};
void temp::display()
{
	cout<<"SUJAL SUVA "<<endl;
	cout<<"220130318034"<<endl;
	cout<<"Hello World "<<endl;
}
int main()
{
	temp t;
	t.display();

	return 0;
}


