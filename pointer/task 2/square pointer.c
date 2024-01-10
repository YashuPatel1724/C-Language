#include<stdio.h>
main()
{
	int n;
	printf("enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("enter the value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
	int *ptr = &a[0];
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("%d",(*ptr) * (*ptr));
		ptr++;
	}
	
}
