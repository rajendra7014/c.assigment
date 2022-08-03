#include<stdio.h>
int main()
{
	int a=956,b=677,c=995;
	
	(a>b) & (a>c)?a : (b>c)?b:c;
    printf("%d",(a>b)& (a>c)?a : (b>c)?b:c);	
	
	
	
	return 0;
}