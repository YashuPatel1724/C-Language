#include<stdio.h>
int sum(int b[],int n)
{
	int i,sum =0;
	for(i=0; i<n; i++)
	{
		sum = sum + b[i];
	}
	return sum;
}
int input(int n)
{
	int i,a[n];
	for(i=0; i<n; i++)
	{
		printf("ente the value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	return sum(a,n);
}
int size()
{
	int x;
	printf("enter the size of array: ");
	scanf("%d",&x);
	return input(x);
}
main()
{
	printf("%d",size());
}
