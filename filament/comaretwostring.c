#include<stdio.h>
#include<string.h>
main()
{
	char name[50];
	char surname[50];
	printf("enter the name : ");
	gets(name);
	printf("enter the name : ");
	gets(surname);
	int i;
	if(name[i] == surname[i])
	{
		printf("same");
	}
	else
	printf("not same");
}
