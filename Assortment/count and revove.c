#include<stdio.h>
main()
{
	int n,x=0,k=0;
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
		if(a[i] == a[j])
		{
			x++;
		}
	}
		
	}
	for(i=0; i<n; i++)
	{
		if(a[i] != a[j-1])
		{				
			printf("%d",a[i]);
		}			
	}

	printf("duplicate is : %d",x);
	
	
}

