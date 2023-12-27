#include<stdio.h>
#include<string.h>
char length(char name[])
{
	int len = strlen(name);
	
	printf("%d",len);
}
main()
{
	char name[50];
	printf("enter the name :");
	gets(name);
	length(name);
}
