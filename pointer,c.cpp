#include<stdio.h>
int main()
{
	int a=3,*p,**q;
	p=&a;
	q=&p;
	printf("%d",a);//3            3
	printf("\n%d",p);//add of a;  6684180
	printf("\n%d",*p);//3          3
	printf("\n%d",q);//add of p;    6684168
	printf("\n%d",*q);//add of a;    6684180
	printf("\n%d",**q);//add of a;   6684180
	
	
	return 0;
}