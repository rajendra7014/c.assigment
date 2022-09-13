#include<stdio.h>

int rj(int x)
{
	if(x>=1)
	{
		printf("%d\n",x);
		rj(x-1);
	}	
}

int main()
{
	rj(10);
	
	return 0;
}