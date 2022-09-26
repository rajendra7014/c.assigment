#include<iostream>
using namespace std;

class rajendra
{
	private:
	 int money=2342;
		
		public:
			friend void anand(rajendra ref);

	
};
       void anand(rajendra ref)
       {
       	cout<<ref.money<<endl;
	   }



int main()
{
	rajendra obj;
	anand(obj);
	return 0;
}