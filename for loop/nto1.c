#include<stdio.h>

main()
{
	int a = 1;
	int n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(a=1; n>=a; n--)
	{
		printf("%d ",n);
	}
}
