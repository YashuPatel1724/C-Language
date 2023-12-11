#include<stdio.h>
main()
{
	int n;
	printf("enter the size od array  :  ");
	scanf("%d",&n);
	int a[n];
	
	int i,j,num;
	for(i=0; i<n; i++)
	{
		printf("enter the a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("enter the value of sum : ");
	scanf("%d",&num);
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]+a[j]== n)
			{
				printf("%d + %d",a[i],a[j]s);
			}
		}
	}
	
}
