#include<stdio.h>
main()
{
	int n,m;
	printf("enter the size of n : ");
	scanf("%d",&n);
	printf("enter the size of M : ");
	scanf("%d",&m);
	
	int a[n][m];
	int b[n][m];
	int sum[n][m];
	
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("enter the array a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}printf("\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("enter the array b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}printf("\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%d  ",sum[i][j]);
		}
		printf("\n");	
	}
}
