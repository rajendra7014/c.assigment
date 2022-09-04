#include<stdio.h>
int test()
{
	int a;
  printf("enter any integer value..");
  scanf("%d",&a);
  printf("\na=%d",a);
  printf("\n%d",++a);
  printf("\n%d",++a);
  printf("\n%d",++a);
  printf("\n%d",--a);
  printf("\n%d",--a);	
}
int main()
{
	test();
	return 0;
}