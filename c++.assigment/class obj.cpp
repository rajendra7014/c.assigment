#include<iostream>
using namespace std;

class A
{
	public:
	int b=34;
	
	void get()
	{
		cout<<"this is functoin"<<endl;
	}
	
};



int main()
{ 
    A obj;
    obj.get();
    cout<<obj.b;
	
	return 0;
}