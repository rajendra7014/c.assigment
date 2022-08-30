//C program to check whether a character is alphabet, digit or special character


#include<stdio.h>
int main()
{
		char ch;
	printf("enter any value");
	scanf("%c",&ch);

	if(ch>='a'&&ch<'z')  
	{
		printf("this is alphabet");
	}
	else if (ch>='A'&&ch<='Z')
	{
		printf("this is  alphabet\n");
	}
    else if(ch>='0'&&ch<='10')
    {
    	printf("this is digit");
	}
	
 else
 {
 	printf("this is special char");
 }
   
	return 0;
}