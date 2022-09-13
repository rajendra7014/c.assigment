#include<stdio.h>

int sum(int x)
{
	if(x>1)
	{
		
	return x+nsum(x-1);
	}
	
	
}


int main()
{
	printf("%d",sum(5));
	
	return 0;

}