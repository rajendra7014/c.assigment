#include<iostream>
using namespace std;

template<typename xyz>
 xyz test(xyz x,xyz y)
 {
// 	cout<<x+y<<endl;
 return x+y;
 }


int main()
{
    cout<<test(3,4)<<endl;
    cout<<test(3.5,5.6)<<endl;
  // cout<<test('w','u')<<endl;
	return 0;
}