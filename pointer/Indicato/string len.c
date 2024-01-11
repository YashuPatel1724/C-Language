#include<stdio.h>
#include<string.h>

main()
{
	char name[50];
	int i;
	printf("enter your name : ");
	gets(name);
	
	int len = strlen(name);
	int *ptr = &len;
	
	printf("%d",*ptr);
}
