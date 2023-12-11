#include<stdio.h>
main()
{
	
	int n,m,k=2;
	printf("enter the size of n:");
	scanf("%d",&n);
	printf("enter the size of m:");
	scanf("%d",&m);
	
	int a[n][m];
	int b[n][m];
	int sum=0;
	
	int i,j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("enter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		sum =sum + a[i][k];
		k--;
	}printf("\n");
	printf("digonal is :%d\n",sum);
		
}
