#include<iostream>
using namespace std;
class A
{
  protected:
  	int varA=56;
  	public:
  		void displayA()
  		{
  			cout<<varA<<endl;
		  }
};

class B
{
  protected:
  int varB=464;
  public:
  void displayB()
  {
  	cout<<varB<<endl;
	  }	
};
class C:public A,public B
{
	public:
		void displayC()
		{
			cout<<"class c"<<endl;
		}
	
};
int main()
{
	C obj;
	obj.displayA();
	obj.displayB();
	obj.displayC();
	return 0;
}