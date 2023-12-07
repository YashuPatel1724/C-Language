#include<stdio.h>
main()
{
	int a[5] = {5,8,6,7,4};
	int i,j,acc;
	
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(a[j]<a[i])
			{
				acc = a[i];
				a[i] = a[j];
				a[j] = acc;
			}
		}
	}
	for(i=0; i<5; i++)
	{
		printf("%d ",a[i]);	
	}
}
