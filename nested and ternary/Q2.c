#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the value of  a : ");
	scanf("%d",&a);
	printf("enter the value of  b : ");
	scanf("%d",&b);
	printf("enter the value of  c : ");
	scanf("%d",&c);
	//a,b,c
	if(a>b)
	{
		
		if(a>c)
		{
			printf("a is maximum");
		}
		else
		{
			printf("c is maximum");
		}		
	}
	else
	{
		if(b>c)
		{
			printf("b is maximum");
		}
		else
		{
			printf("c is maximum");
		}		
	}
}
