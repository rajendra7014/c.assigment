#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2];
	int row,col,x;
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&a[row][col]);
		}
	
	}
		for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",a[row][col]);
		}
		
			printf("\n");
			
	}
		for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&b[row][col]);
		}
		
			
		
	}
		for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",b[row][col]);
		}
		printf("\n");
	}
     	
	
	for(row=0;row<2;row++)
	{
	
		for(col=0;col<2;col++)
		{
	     	c[row][col]=0;
	     	for(x=0;x<2;x++)
	     	{
	     		c[row][col]=c[row][col] + a[row][x]*b[x][col];
	     		
			 }
		}
		
		
	}
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d",c[row][col]);
		}
		
		printf("\n");
	}

	
	
	
	
	
	
	
	
	return 0;
}