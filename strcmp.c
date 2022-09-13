#include<stdio.h>
#include<string.h>
int main()
{
	 char str1[20]="HELLO",str2[20]="HELLO";
	 strcmp(str1,str2);
	 printf("%d",strcmp(str1,str2));
	 if(strcmp(str1,str2)==0)
	 {
	 	printf("equal");
	 }
	 else
	 {
	 	printf("not equal");
	 }
	 
	 
	return 0;
}