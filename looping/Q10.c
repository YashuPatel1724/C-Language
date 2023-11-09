#include<stdio.h>
main()
{
	int i=1,r;
	printf("enter the valu of  r :");
	scanf("%d",&r);
	
	
	while(i<=10)
	{
		printf("%d * %d = %d\n",r,i,r*i);
		i++;
	}
}
