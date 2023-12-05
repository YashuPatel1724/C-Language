#include<stdio.h>
main()
{
	int n;
	int a[n];
	printf("enter the size : ");
	scanf("%d",&n);
	int i;
	for(i=0; i<n; i++)
	{
		printf("enter the value a[%d]: ",i);
		scanf("%d",&a[i]);	
	}
	for(i=n-1; i>=0; i--)
	{
		printf("%d ",a[i]);
	}
}
