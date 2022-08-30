#include<stdio.h>
int main()
{
	int a[50];
	int x;
	
	for(x=0;x<5;x++)
	{
		scanf("%d",&a[x]);
	}
	for(x=0;x<5;x++)
	{
		printf("%d ",a[x]);
	}
	
	return 0;
}