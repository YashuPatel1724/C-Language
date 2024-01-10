#include<stdio.h>
main()
{
	int a=10;
	int *ptr = &a;
	int **ptr1 = &ptr;
	int ***ptr2 = &ptr1;
	
	printf("%d\n",*ptr2);
	printf("%d\n",**ptr2);
	printf("%d",***ptr2);
}
