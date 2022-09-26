#include<stdio.h>
struct test
{
	int x;
	
};

int getStruct(struct test p)
{
	scanf("%d",&p.x);
	printf("%d",p.x);
	
}

int main()
{
	struct test v;	// int x
	
	getStruct(v);
	
	
	return 0;
}