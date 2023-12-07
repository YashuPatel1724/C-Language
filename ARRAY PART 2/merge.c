#include<stdio.h>
//Q.1 Write a Program to perform the merge operation of two 1D arrays 
//& store it in another array. Keep in mind that both array sizes can be different.
main()
{
	int n,m,o;
	printf("enter the size of a[n]");
	scanf("%d",&n);
	printf("enter the size of b[m]");
	scanf("%d",&m);
	int a[n];
	int b[m];
	int merge[o=m+n];
	int i,j=0;
	for(i=0; i<n; i++)
	{
		printf(" enter the value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);	
	}
	printf("\n");
	for(i=0; i<m; i++)
	{
		printf(" enter the value of b[%d]",i);
		scanf("%d",&b[i]);
	}
	for(i=0; i<m; i++)
	{
		printf("%d",b[i]);	
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		merge[i] = a[i];
	}
	for(i=n; i<o; i++)
	{
		merge[i] = b[j];
		j++;
	}
	for(i=0; i<o; i++)
	{
		printf("%d",merge[i]);
	}
	
	
	
}
