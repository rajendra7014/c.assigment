#include<stdio.h>
int main()
{
	int choice;
   char ch;
   ch='Y';
	do
	{ 
	  printf("enter your choice..");
	  scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("hii..");
			break;
			case 2: printf("hello..");
			break;
			
			
		}
		printf("\ndo you want to continue(Y/N)");
	//	scanf("%c",&ch);
		
	
		
	}
	 while(ch=='Y');
	
	
	
	
	return 0;
}