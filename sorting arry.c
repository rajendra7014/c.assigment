#include<stdio.h>
int main()
{
	int arr[6]={34,56,45,94,6,67};
	int x,y,temp=0;
	for(x=0;x<6;x++)
	{
		for(y=0;y<6;y++)
		{
			if(arr[x]<arr[y])
			{
				temp=arr[x];
				arr[x]=arr[y];
				arr[y]=temp;
			}
		}
	}
	for(x=0;x<6;x++)
	{
		printf("%d  ",arr[x]);
	}
	
	return 0;
}