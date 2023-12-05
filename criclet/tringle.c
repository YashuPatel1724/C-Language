#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1; i<=4; i++)
	{
		for(j=i; j<=4; j++)
		{
			if(j==4)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		for(k=1; k<i; k++)
		{
			printf("  ");
		}
		for(j=2; j<=i; j++)
		{
			if(j==2)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
