#include<stdio.h>
#include<string.h>
main()
{
	char name[50];
	printf("Enter the name :");
	gets(name);
	int len = strlen(name);
	int i,j,ck;
	for(i=0; i<len; i++)
	{
		ck=0;
		for(j=0; j<len; j++)
		{
			if(name[j]==' ')
			{
				ck=1;
			}
			if(ck==1)
			{
				name[j] = name[j+1];
			}
		}
	}
	puts(name);
}
