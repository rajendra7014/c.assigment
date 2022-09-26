#include<iostream>
using namespace std;

class bank
{
	private:
		int atm=232243;
		float balance=28832922234.78;
		
    public:
	
	  string bankname="SBI";		
	  string IFC_CODE="SBI232300";
	  int account_no=3490744;
	
	
};
 
int main()
{
	bank obj;
	cout<<"account no="<<obj.account_no<<endl;
	cout<<"BANK NAME="<<obj.bankname<<endl;
	cout<<"IFC CODE="<<obj.IFC_CODE<<endl; 
	 
         	return 0;
}