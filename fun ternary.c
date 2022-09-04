#include<stdio.h>
int run()
{
	int a=6,b=8,sum;
	char res;
	sum=a+b;
	printf("total=%d\n",sum);

   res=(a==b) ? 't':'f';
   printf("%c",res);
}
int main()
{
	 run();
	return 0;
}