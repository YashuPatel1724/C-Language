#include<stdio.h>
main()
{
	int n;
	printf("enter the size od array  :  ");
	scanf("%d",&n);
	int a[n];
	int b[n];
	int c[n];
	
	int i,j;
	for(i=0; i<n; i++)
	{
		printf("enter the a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("enter the b[%d]",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d",b[i]);
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		c[i] = a[i] + b[i];
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",c[i]);
	}
}
