#include<stdio.h>
int main()
{
	int sci,math,his;
	float total,percentage;
	printf("enter the marks\n");
	scanf("%d%d%d",&sci,&math,&his);
	printf("\nscience=%d\nmaths=%d\nhistory=%d",sci,math,his);
	total=sci+math+his;
	printf("\ntotal marks=%.f",total);
	percentage=total/3;
	printf("\npercentage=%.f",percentage);
	if(percentage>=90)
	{
		printf("\ngrade ..A");
	}
	else if(percentage>=75)
	{
		printf("\ngrade B");
	}
	else if(percentage>=33)
	{
		printf("\ngrade C");
	}
	else
	{
		printf("\nfail..");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}