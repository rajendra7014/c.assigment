#include<stdio.h>
int run()
{
	int number1,number2;
	printf("enter any two integer number\n");
	scanf("%d%d",&number1,&number2);
	printf("\nyou have entered number1=%d\n and number2=%d\n",number1,number2);
	if(number1>number2)
	{
		printf("max number=%d\n",number1);
	}
	else
	{
		printf("max number=%d",number2);
	}
	return 0;
	
}
int main()
{
	run();
	

}