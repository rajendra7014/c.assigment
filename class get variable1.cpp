#include<iostream>
 using namespace std;
 class person
 {
    public:
	int age;
	void get(int x)
	{
		age=x;
		
		
		cout<<age;
		
		}	
 };

int main()
{
	person p;
	p.get(23);
	return 0;
}