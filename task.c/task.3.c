#include<stdio.h>
int main()
{
	float day,year,week,month;
	
	printf("enter a days...");
	scanf("%f",&day);
	
	

	
	year=day/365;
	printf("year=%f\n",year);
	
	month=day/30;
	printf("month=%f\n",month);
	
	week=day/7;
	printf("week=%f",week);
	
	
	
	
	
	return 0;
}