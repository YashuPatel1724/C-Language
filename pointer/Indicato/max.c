#include<stdio.h>
main()
{
	int a[5];
	int i,max=0;
	for(i=0; i<5; i++)
	{
		printf("enter the value od array : ");
		scanf("%d",&a[i]);
	}
	a[0] = max; 
	for(i=0; i<5; i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	int *ptr = &max;
	printf("%d",*ptr);
	
}
