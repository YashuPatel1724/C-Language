#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	char b[50];
	printf("enter the name : ");
	gets(a);
	int i;
	int len = strlen(a);
	for(i=0; i<len; i++)
	{
		b[i] = a[i];
	}
	puts(b);
}
