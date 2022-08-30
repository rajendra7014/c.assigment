#include<stdio.h>
int main()
{
	int arr[]={5,6,7,8,9,3};
	int max,i,sec_max;
	
	max=arr[0];
    
    for(i=0;i<6;i++)
    {
    	if(arr[i]>max)
    	 {
    	 	max=arr[i];
		 }
		
    	
	}
//	printf("%d",max);    max=9
   
  sec_max = arr[0];
	
	for(i=0;i<6;i++)
	{
			
		if(arr[i]>sec_max && arr[i]!=max) 
		{
			sec_max=arr[i];
		}
		
	}
		
	printf("%d",sec_max);
	
	return 0;
}