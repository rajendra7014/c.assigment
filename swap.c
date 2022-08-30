#include<stdio.h>
int main()
{
	int a=2,b=4;//c=2 a=4 b=2,a=2
	
//	c=a;
//  a=b;
//	b=c;
	
	a=a+b;//2+4=6
	b=a-b;//6-4=2
	a=a-b;//6-2=4
	
	printf("a=%d\nb=%d",a,b);
	
	
	
	
	
	
	return 0;
}