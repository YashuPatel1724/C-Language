#include<stdio.h>
main()
{
	int n ,max=0;
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
	max=a[0];
	for(i=0; i<n; i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	max=b[0];
	for(i=0; i<n; i++)
	{
		if(max<b[i])
		{
			max=b[i];
		}
	}
	printf("max of a[i] : %d ",max);
	printf("max of b[i] : %d ",max);
}
