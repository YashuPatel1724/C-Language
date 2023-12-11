#include<stdio.h>
main()
{
	int n,m;
	printf("enter the size of n : ");
	scanf("%d",&n);
	printf("enter the size of M : ");
	scanf("%d",&m);
	
	int a[n][m];
	int sum=0;
	
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
		sum = sum + a[i][i];
		printf("\n");	
	}
	printf("%d",sum);


}
