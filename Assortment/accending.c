#include<stdio.h>
main()
{
	int n,aec;
	printf("enter the size od array  :  ");
	scanf("%d",&n);
	int a[n];
	int i,j;
	for(i=0; i<n; i++)
	{
		printf("enter the a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				aec=a[i];
				a[i]=a[j];
				a[j]=aec;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
}
