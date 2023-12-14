#include<stdio.h>
#include<string.h>
main()
{
	char name[50];
	printf("Enter the name :");
	gets(name);
	int len = strlen(name);
	int i,j,check=0;
	for(i=0; i<len; i++)
	{
		check=0;
		for(j=0; j<len; j++)
		{
			if((name[i] == name[j]) && (i!=j))
			{
				check=1;
			}
		}
		if(check!=1)
		{
			printf("%c",name[i]);
		}
	}
	
}
