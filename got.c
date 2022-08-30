#include<stdio.h>
int main()
{
	int x;
	x=10;
	xyz:
	if(x>=1)
	{
		printf("%d\n",x);
		x--;
	}
	goto xyz;
	
	return 0;
}