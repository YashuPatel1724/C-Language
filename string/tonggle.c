#include<stdio.h>

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
		if(name[0]>=97 && name[0]<=122)
		{
			name[0] = name[0] - 32;
		}
		else if(name[i]>=65 && name[i]<=90)
		{
			name[i] = name[i] + 32;
		}
	}
	printf("%s",name);
}

