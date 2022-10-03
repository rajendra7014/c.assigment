#include<iostream>
using namespace std;
int raj=454;
class get
{
	private:
   void fun()
   {
   	cout<<"this is function"<<endl;
   }
   public:
   void fun1()
   {
   	cout<<"this is public function"<<endl;
   	
   }
//   int a;
   void name(int x)
   {
 // 	a=x;
   	cout<<"name="<<x<<endl;
   	
   }
   void rj(int xyz)
   {
   	cout<<"rj="<<xyz<<endl;
   }


	
};
int main()
{
	get p;
//	p.fun;
	p.get::fun1();
	p.name(56);
	p.rj(2345);
	cout<<"a="<<raj<<endl;
	
	
	
	
	
	return 0;
}