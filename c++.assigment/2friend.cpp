#include<iostream>
using namespace std;
 
 class anand;
 class rajendra
 {
 	private:
 		int money=4354;
 		
 		public:
 			friend void anuraj(anand a,rajendra r);
 };
    class anand
    {
    	private:
    		int prop=456;
    		public:
 			friend void anuraj(anand a,rajendra r);
	};
       	 void anuraj(anand a,rajendra r)
         {
         	cout<<r.money-a.prop<<endl;
	      }
int main()
{
    anand obj1;
    rajendra obj2;
	anuraj(obj1,obj2);
	
	
	return 0;
}