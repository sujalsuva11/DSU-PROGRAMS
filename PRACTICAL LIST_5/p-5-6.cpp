#include<iostream>
using namespace std;
class animal
{
	public:
	eat()
	{
		cout<<"Eating ..... :)";
	}
};
class dog : public animal
{
	public:
	eat()
	{
		cout<<"Dog Eating Bread :)";
	}
};
int main()
{
		cout<<"SUJAL SUVA "<<endl;
	cout<<"220130318034"<<endl;

	dog d=dog();
	d.eat();
	
	return 0;
}
