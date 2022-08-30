#include<stdio.h>
int getsum(int a,int b)
{
	printf("sum of %d and %d =%d",a,b ,a+b);
}
int main()
{ int a,b;
	printf("enter first value");
	scanf("%d",&a);
	printf("enter second value");
	scanf("%d",&b);
	
	getsum(a,b);
	return 0;
}