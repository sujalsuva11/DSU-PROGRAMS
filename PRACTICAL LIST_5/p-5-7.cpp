//Runtime polymorphism with virtual keyword
#include<iostream>
using namespace std;
class base
{
	public:
			virtual void print()
			{
				cout<<"print base class"<<endl;	
			}	
			void show()//without virtual keyword
			{
				cout<<"show base class"<<endl;
			}
};
class derived : public base
{
	public:
			void print()
			{
				cout<<"print derived class"<<endl;
			}
			void show()
			{
				cout<<"show derived class"<<endl;
			}
};
int main()
{
	cout<<"SUJAL SUVA "<<endl;
	cout<<"220130318034"<<endl;
		cout<<"---------------"<<endl;
	
	base *b;
	derived d;
	b=&d;
	b->print();
	b->show();
	return 0;
}
