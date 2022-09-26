#include<iostream>
using namespace std;

class father
{
  
    protected:
    	int money=1000;
    	string properties="land";
    	string properties2="house";
};
class wife:public father
{
	public:
		void getmoney()
		{  
			cout<<"WIFE ="<<"50% money ="<<money/2<<endl;
				cout<<"WIFE ="<<"properties  ="<<properties<<endl;
		}
	
};
class son :public father
{
   public:
   void getmoney()
   {
   	cout<<"SON ="<<"50% money="<<money/2<<endl;
   	
	   }	
};
 class daughter:public father
 {
  public:
  void getprop()
  {
  	cout<<"DAUGHTER ="<<"properties ="<<properties2<<endl;
	  }	
 };




int main()
{
	wife obj1;
	son obj2;
	daughter obj3;
	obj1.getmoney();
	obj2.getmoney();
	obj3.getprop();
	
	return 0;
}