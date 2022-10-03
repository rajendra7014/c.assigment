#include<iostream>
using namespace std;

class rajendra
{
	private:
		int money =1000;
		
		friend class anuraj;
};
 class anuraj: public rajendra
  {
  public:
  	 void getmoney(rajendra obj)
  	 {
  	 	cout<<obj.money<<endl;
	   }
};

int main()
{  rajendra r;
    anuraj a;
    a.getmoney(r);
	
	return 0;
}