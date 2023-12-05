#include<stdio.h>
main()
{
	int n;
	int a[n];
	printf("enter the length : ");
	scanf("%d",&n);
	int i,sum=0;
	for(i=0; i<n; i++)
	{
		printf("enter the value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		sum=sum+a[i];
	}
	printf(" average is  : %d",sum/n);
}
