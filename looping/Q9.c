#include<stdio.h>
main()
{
	int i=1,sum=1;
	int n;
	printf("enter the valu of  n :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum=sum*i;
		i++;
	}
	printf("%d",sum);
	
}
