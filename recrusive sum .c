#include<stdio.h>
int sum(int x)
{
 
 
 
 
 
  if(x>1)
{
	printf("%d=%d",x);
	return x+sum(x-1);
	
	
}

}



int main()
{
	printf("%d",sum(5));


	return 0;
}
