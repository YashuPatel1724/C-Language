#include<stdio.h>
main()
{
	int i=1;
	int n;
	printf("enter the valu of  n :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
		i++;
	}
}
