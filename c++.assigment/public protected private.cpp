#include<iostream>
using namespace std;
class bank
{
	protected:
		int atmpin;
		float balance;
		int acc_no;
	public:
	string bankname="SBI";
	string IFCCODE="SBI00023";	
	
};
class rajendra:public bank
{
   public:
   void getdetails()
   {
   	 cout<<"enter atmpin"<<endl;
   	 cin>>atmpin;
   	 cout<<"atmpin="<<atmpin<<endl;
   	 
	   }	
};

class anand:public bank
{
	public:
		void detailsofanand()
		{
			balance=34563;
			cout<<"ANAND BALANCE="<<balance<<endl;
		}
	
};
int main()
{
	rajendra x;
	anand y;
	x.getdetails();
	y.detailsofanand();
	
	
	return 0;
}