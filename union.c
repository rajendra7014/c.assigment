#include<stdio.h>

  union test
  {
  	int age;
  	char name[20];
  	float salary;
  	
  	
  	
  };





int main()
{
	union test p;
	scanf("\n%d",&p.age);
		printf("\n%d",p.age);
	scanf("\n%s",&p.name);
		printf("\n%s",p.name);
	scanf("\n%f",&p.salary);
	printf("\n%f",p.salary);
//	printf("%d",p.age);
//	printf("\n%s",p.name);
//	printf("\n%f",p.salary);

	
	
	return 0;
}