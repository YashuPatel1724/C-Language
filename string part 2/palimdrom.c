#include<stdio.h>
#include<string.h>
main()
{
	char name[50];
	printf("enter the name : ");
	gets(name);
	int len = strlen(name);
	int i,j,x=len-1,check=0;
	for(i=0; i<len; i++)
	{

		if(name[i]!=name[x])
		{
			check=1;
		}
		x--;
		
	}
		
	if(check==1)
		{
			printf(" not palindrom");
		}
		else
		{
			printf("  palindrom");
		}
}
