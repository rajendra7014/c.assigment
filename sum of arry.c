#include<stdio.h>
int main()
{
	int a[3],b[3];
	int x;
	printf("enter first element value..\n");
	
	for(x=0;x<3;x++)
    	{
		scanf("%d",&a[x]);
    	}
	printf("enter second element value..\n");
	for(x=0;x<3;x++)
        	{
		scanf("%d",&b[x]);
        	}
	printf("\nsum of two array\n");
	for(x=0;x<3;x++)
            	{
		printf("%d ",a[x]+b[x]);
		
             	}
	
	
	
	
	
	
	return 0;
}