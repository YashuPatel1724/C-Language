#include<stdio.h>
int  fac(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n * fac(n-1);
}
main()
{
	int n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	printf("%d",fac(n));
}
