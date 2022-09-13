#include<stdio.h>

int y=6;
int run(int x)
{  
    int test;
    test=x;
	
	printf("test=%d\n y=%d",test,y);
	
}


int main()
{
	int a=7,k;
	run(76);
	printf("\nmain y=%d and run=%d\n",y,run);
	
	for(k=0;k<5;k++)
	{
	printf("%d\n",k);	
	}
	
	return 0;
}