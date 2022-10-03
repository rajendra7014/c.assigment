#include<iostream>
using namespace std;

 class fun_overloading
 {
  public:
  	void test()
  	{
  		cout<<"hello"<<endl;
	  }
	  void test(int x)
	  {
	  	
	  	cout<<x<<endl;
	  }
	  void test(string y)
	  {
	  	cout<<"string hello"<<endl;
	  	
	  }
    
 };

int main()
{
	fun_overloading obj;
	obj.test();
	obj.test(56);
	obj.test("hello");
	
	return 0;
}