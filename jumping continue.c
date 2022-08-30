#include<stdio.h>
int main()
{
	int a;
	for(a=1;a<=10;a++)
	{
		if(a==1||a==3||a==5)
		{
			continue;
		}
		printf("\n%d",a);
	}
 	
	
	
	
	
	
	return 0;
}