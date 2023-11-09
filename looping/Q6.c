#include<stdio.h>
main()
{
	int i=1;
	int n;
	printf("enter the valu of  n :");
	scanf("%d",&n);
	
	while(n>=i)
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
		n--;
	}
}
