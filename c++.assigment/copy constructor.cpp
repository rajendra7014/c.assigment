#include<iostream>
using namespace std;
class people
{
	private:
		int money;
		
		public:
			
	people(int m)	
	{
	money=m;
		cout<<money<<endl;
			}		
	
	people(people &obj123)
	{
		cout<<obj123.money;
		
	}
	
	
	
};
int main()
{
	people x(3456);
	people y(x);
	
	
	return 0;
}