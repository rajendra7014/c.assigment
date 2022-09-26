#include<iostream>
using namespace std;

class father
{
   protected:
   int money=3450;
   
   	
};

class mother:public father
{
   public:
  void getmoney()
   {
   	cout<<money<<endl;
	   }	
};

class son:public father
{
	public:
	void getm()
		{
			cout<<money<<endl;
		}
};


int main()
{
	mother obj1;
	son obj2;
	obj1.getmoney();
	obj2.getm();
	
	return 0;
}