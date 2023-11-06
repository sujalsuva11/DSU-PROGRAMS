#include <iostream>
using namespace std;
class temp
{
    public:
        int a;
        static int b;
        void display()
        {
            cout << "a: " << a <<endl;
            cout << "b: " << b <<endl;
        }
};
int temp ::b=0;
int main()
{
 	cout<<"SUJAL SUVA "<<endl;
	cout<<"220130318034"<<endl;
	temp t;
    t.display();
   
    return 0;
}

