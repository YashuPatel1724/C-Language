#include<stdio.h>
void dived(int a)
{
	if(a%3==0 && a%5==0)
	{
		printf("divisbale by 3 & 5");
	}
	else if(a%5==0)
	{
		printf("divisbale by 5");
	}
	else if(a%3==0)
	{
		printf("divisbale by 3");
	}
	else
	{
		printf("NOT DIVISABLE 3 AND 5");
	}
}
main()
{
	int a;
	printf("enter the alue of a : ");
	scanf("%d",&a);
	 dived(a);
}
