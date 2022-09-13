#include<stdio.h>
int getv()
{
  int x=4;
  static int y=5;
  printf("x=%d \n y=%d\n",x,y);
  x++;
  y++; 

	
}

int main()
{
	getv();
	getv();
	getv();
	return 0;
}