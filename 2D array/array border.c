#include<stdio.h>
main()
{
	int a[5][5];
	
	int i,j;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("enter the array a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i==0 || i==4 || j==0 || j==4)
			{
				printf("%d",a[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
