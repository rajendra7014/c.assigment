#include<stdio.h>
int main()
{
	char ch;
	printf("enter any chrecter value \n");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e'|| ch=='i' || ch=='o'|| ch=='u')
	{
		printf("vowels...!");
	}
	
	else
	{
		printf("constants...$");
	}
	
	
	
	
	
	return 0;
}