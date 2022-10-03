#include<iostream>
using namespace std;

 class A
 {   public:
    A()
    {
    	cout<<"this is constructor function"<<endl
		;
    	int a=4,b=5;
    	cout<<"sum of  "<<a<<"+"<<b<<"="<<a+b;
	}
 	
 };



int main()
{
	A obj;
	
	return 0;
}