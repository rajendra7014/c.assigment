#include<stdio.h>
int main()
{
	int a=1;
	raj:
	if(a<=10)
	{
		printf("%d\n",a);
		a++;
		}	
	
	goto raj;
	
	return 0;
}