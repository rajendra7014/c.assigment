#include<stdio.h>

  struct test
  {
  	int age;
  	char name[20];
  	float salary;
  	
  	
  	
  };





int main()
{
	struct test p;
	scanf("%d",&p.age);
	scanf("\n%s",&p.name);
	scanf("\n%f",&p.salary);
	
	printf("%d",p.age);
	printf("\n%s",p.name);
	printf("\n%f",p.salary);
	
	
	
	return 0;
}