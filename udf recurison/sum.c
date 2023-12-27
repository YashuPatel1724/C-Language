#include<stdio.h>
int  fac(int n)
{
	if(n==0)
	{
		return 0;
	}
	return n + fac(n-1);
}
main()
{
	int n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	printf("%d",fac(n));
}
