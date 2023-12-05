#include<stdio.h>
main()
{

	int a[5];
	int i,j;
	for(i=0; i<5; i++)
	{
		printf("enter the value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<5; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("%d * %d = %d\n",a[i],j,a[i]*j);
		}
		printf("\n");
	}
	
}
