#include<stdio.h>
int cube(int a)
{
	int c;
	c  = a*a*a;
	return c;
}
int inputcube()
{
	int a;
	printf("enter the alue of a : ");
	scanf("%d",&a);
	return cube(a);
}
main()
{
	
	printf("%d",inputcube());
}
