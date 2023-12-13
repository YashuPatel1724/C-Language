#include<stdio.h>
//WAP to convert given string in lowercase.

main()
{
	int  n;
	printf("enter the size of array : ");
	scanf("%d",&n);
	
	char name[n];
	int i;

	
	printf("enter the name  : ");
	scanf("%s",&name	);
	
	for(i=0; i<n; i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			name[i] = name[i] + 32;
		}
	}
	printf("%s",name);
}

