#include<iostream>
using namespace std;
class account
{
	public:
		float acc_no;
		float balance;
		string branch_code;

};
int main()
{
	account A;
	cout<<"SUJAL SUVA "<<endl;
	cout<<"220130318034"<<endl;
	cout<<"-------------"<<endl;
	
	cout<<"Enter The Account Number ::";
	cin>>A.acc_no;
	cout<<"Enter The Branch Code (AlphaBate)::";
	cin>>A.branch_code;
	cout<<"Enter The Balance ::";
	cin>>A.balance;
	
	cout<<"The Account Number is ::"<<A.acc_no<<endl;
	cout<<"The Brach Code is ::"<<A.branch_code<<endl;
	cout<<"The Balance Of This Account is ::"<<A.balance;
	
	return 0;
}
