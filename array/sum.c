#include<stdio.h>
main()
{
	int a[3];
	int i,sum=0;
	for(i=0; i<3; i++)
	{
		printf("enter the value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<3; i++)
	{
		sum=sum+a[i];
	}
	printf("sum is : %d",sum);
}
