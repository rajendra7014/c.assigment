#include<stdio.h>
int fun(int p,int q)
{
	char test;
	char ch='Y';
	
	
	do
	{
	
	printf("Enter your choice:");
	scanf("%c",&test);
	
	
	
	switch(test)
	  {
		case '+': printf("%d",p+q);
		break;
		
		case '-': printf("%d",p-q);;
		break;
		
		case '*': printf("%d",p*q);;
		break;
		
		default:
			printf("Invalid Choice...!");
		
	   }
	printf("do you want to continue..Y/N");
	scanf("%c",&ch);
	
    }
  while(ch);
	
}

int main()
{

	
	fun(12,2);
	
	
	
	return 0;
}