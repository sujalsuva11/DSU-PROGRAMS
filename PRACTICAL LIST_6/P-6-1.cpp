#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	
		cout<<"SUJAL SUVA "<<endl;
	cout<<"220130318034"<<endl;
	ofstream filestream("test.txt");
	if(filestream.is_open())
	{
		filestream<<"Welcome to the Dr. Subhash University";
		filestream<<"This is C++ Subject.";
		filestream.close();
	}
	else
	{
		cout<<"File Opening is fail";
	}
	return 0;
	
	
}
