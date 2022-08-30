//Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote. 



#include<stdio.h>
int main()
{
	int age;
	printf("enter age of candidate");
	scanf("%d",&age);
	
	if(age<18)
	{
		printf("sorry you are not eligible to vote");
	}
	else
	{
		printf("congratulation you are eligible to vote");

	}
	
	
	
	
	
	
	
	return 0;
}