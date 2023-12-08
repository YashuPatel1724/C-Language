#include<stdio.h>
main()
{
	int n,m;
	printf("enter the size of n : ");
	scanf("%d",&n);
	printf("enter the size of M : ");
	scanf("%d",&m);
	
	int a[n][m];
	
	int i,j,sum;
	float  ave,op;
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
			sum=sum+a[i][j];
		}
	}
	op=n*m;
	ave = sum/op;
	printf("%.2f",ave);
	
	
}
