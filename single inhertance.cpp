#include<iostream>
using namespace std;
class father
{  public:
	void getA()
	{
	cout<<"balance=23lakh"<<endl;
    }
};
class son: public father
{

  public:
  	void getB()
  	{
  		cout<<"balance=father"<<endl;
	  }


};

int main()
{ 
	son obj;
	obj.getA();
	obj.getB();
	return 0;
}