#include<stdio.h>
int main()
{
	int arr[] = {1,3,4};
	int max,i;
	
	max =arr[0];//1
	
	for(i=0;i<3;i++)
	{
		
		
		if(max<=arr[i]) //0= 1<=1 , 1=3 1<=3, 2=4 1<=4
		{
			max=arr[i];
		}
		
	}
	
	printf("%d",max);
		
	
	
	
	return 0;
}