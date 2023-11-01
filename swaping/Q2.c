#include<stdio.h>
main()
{
	int a=10;
	int b=20;
	int c;
	printf("a = %d",a);
	printf("\nb =%d\n\n",b);

	c=a;
	a=b;
	b=c;
	
	printf("a = %d",a);
	printf("\nb =%d",b);
}
