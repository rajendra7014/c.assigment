/*Loop : used to repeat code based on condition given
   initialization/ assignment // x=1
condition // a>b
inc/dec //++,--*/

#include<stdio.h>
int main()
{

	int x,num;
	scanf("%d",&num);
 /*  x=1;
	for(x=0;x<=10;x++)
	{
		printf(" %d\n",x);
	}*/
	
	for(x=1;x<=10;x++)
	{
		printf("%d - %d=%d\n",num,x,num-x);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
   }   