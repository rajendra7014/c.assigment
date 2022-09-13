#include<stdio.h>

int fun(int x)
{
	printf("hello rajendra\n");
	if(x>0)
	{
		fun(x-1);
	}
	
}




int main()
{
	fun(3);
	
	return 0;
}
