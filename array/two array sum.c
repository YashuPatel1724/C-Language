#include<stdio.h>
main()
{
	int n;
	int a[n];
	int b[n];
	int sum[n];
	printf("enter the size : ");
	scanf("%d",&n);
	int i;
	for(i=0; i<n; i++)
	{
		printf("enter the value a[%d]: ",i);
		scanf("%d",&a[i]);	
	}
	for(i=0; i<n; i++)
	{
	printf("%d",a[i]);
			
	}printf("\n");
	for(i=0; i<n; i++)
	{
		printf("enter the value b[%d]: ",i);
		scanf("%d",&b[i]);	
	}
	for(i=0; i<n; i++)
	{
		printf("%d",b[i]);		
	}printf("\n");
	for(i=0; i<n; i++)
	{
		sum[i] = a[i] + b[i];
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",sum[i]);
	}
	
}
