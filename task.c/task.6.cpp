//C program to check whether a character is Uppercase or Lowercase
#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("this character is uppercase");
	}
	else if(ch>='a'&&ch<='z')
	{
		printf("this character is lowercase");
	}
	else
	{
		printf("this is not an alphabet");
	}
	
	
	return 0;
}