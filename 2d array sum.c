#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],sum[2][2];
	int row,col;
	
	printf("enter first array element : \n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",& a[row][col]);
		}
		
	}
		printf("first array element : \n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d", a[row][col]);
		}
	 printf("\n");	
	}
		printf("enter second array element : \n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",& b[row][col]);
		}
		
	}
		printf("second array element : \n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d",b[row][col]);
		}
		printf("\n");
	}
	 printf("\n sum of 2array:\n");
	 
	 for(row=0;row<2;row++)
	 {
	 	for(col=0;col<2;col++)
	 	{
	 		sum[row][col]=a[row][col]+b[row][col];
	 		printf("%d ",sum[row][col]);
		 }
	 	printf("\n");
	 }
	
	
	
	
	
	return 0;
}