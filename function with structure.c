#include<stdio.h>

 struct test
 {
   int x;	
 };

 int getstruct (struct test p)
 {
 	scanf("%d",&p.x);
 	printf("%d",&p.x);
 	
 	
 }


int main()
{
	struct test v;
	
	getstruct(v);
	
	return 0;
}