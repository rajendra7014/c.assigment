#include<stdio.h>
int rj(int x)
{
	if(x<=10)
	{
		printf("%d\n",x);
		rj(x+1);
	}
	
}
int main()
{
	rj(1);
	
	
	return 0;
}