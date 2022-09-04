#include<stdio.h>
int run()
{
		int phy,chem,math;
 	float percentage,total;
 	printf("enter marks..\n");
 	scanf("%d%d%d",&phy,&chem,&math);
 	printf("physics=%d\nchemisty=%d\nmaths=%d",phy,chem,math);
 	total=phy+chem+math;
 	printf("\ntotal marks=%.f\n",total);
 	percentage=total/3;
 	printf("percentage=%f",percentage);
 	if(percentage>=90)
 	{
 		printf("\n grade a");
	 }
	 else if(percentage>=70)
	 {
	 	printf("\ngrade b");
	
	 }
	else if(percentage>=60)
	{
		printf("\ngrade c");
	}
 	
 	else
 	{
 		printf("\nfail");
	 }
}

 int main()
 {
 
 	run();
 	
 	return 0;
 }