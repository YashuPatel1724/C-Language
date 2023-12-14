#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	printf("enter the name : ");
	gets(a);
	int i;
	int len = strlen(a),check;
	for(i=0; i<len; i++)
	{
		check=0;
		if(a[i]>=48 && a[i]<=57)
		{
			check=1;
		}
	}
	if(check==1)
	{
		printf("value is numeric");
	}
	else
	{
		printf("value is not numeric");
	}
}
