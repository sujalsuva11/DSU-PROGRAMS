//Write a C++ program to demonstrate use of Default Constructor
#include<iostream>
using namespace std;
class student
{
	private :
			int rollno;
			string name;
			
	public :	
	
			student()
			{
				cout<<"Enter The Roll Number of Student ::";
				cin>>rollno;
				cin.ignore();
				cout<<"Enter The Name of Student ::";
				getline(cin,name);				
			}
			
			void putdata()		
			{
				cout<<"Roll Number of Student is ::"<<rollno<<endl;
				cout<<"Name of The Student is ::"<<name<<endl;
			}
}s1;
int main()
{
	cout<<"SUJAL SUVA "<<endl;
	cout<<"220130318034"<<endl;
	s1.putdata();
	return 0;
}
