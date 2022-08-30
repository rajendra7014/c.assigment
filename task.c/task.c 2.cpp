//C program to convert centimeter to meter and kilometer



#include<stdio.h>
int main()
{
	float cm,meter,km;
	printf("\nenter the length in cm");
	scanf("%f",&cm);
	
	meter=cm/100.0;
	km=cm/100000.0;
	
	printf("\nlength in meter=%f",meter);
	printf("\nlength in km=%f",km);
	
	
	
	
	
	
	
	
     return 0;	
}
