#include<iostream>
using namespace std;

class person
{
	private:
		int atm=3456;
		public:
	 
   ~person()
	 {
	 	cout<<atm<<endl;
			 }		
			
		
};

int main()
{
	person x;
	return 0;
}