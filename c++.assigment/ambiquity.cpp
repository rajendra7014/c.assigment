#include<iostream>
using namespace std;

class A
{
	public:
		void getA()
		{
			cout<<"A"<<endl;
		}
	
};

class B : virtual public A
{
	public:
		void getB()
		{
			cout<<"B"<<endl;
		}
};
class C : virtual public A
{
	public:
		void getC()
		{
			cout<<"C"<<endl;
		}
};

class D : public B , public C
{
	public:
		void getD()
		{
			cout<<"D"<<endl;
		}
	
};


int main()
{   D obj;
     obj.getA();
     obj.getB();
     obj.getC();
     obj.getD();
	
	return 0;
}