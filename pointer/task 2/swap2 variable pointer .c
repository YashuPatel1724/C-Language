#include<stdio.h>
main()
{
	int a,b;
	int *ptr1, *ptr2;
	printf("enter the value od a : ");
	scanf("%d",&a);
	
	printf("enter the value of b : ");
	scanf("%d",&b);
	ptr1= &a;
	ptr2 =&b;
	
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
	
	
	
	printf("a : %d\n",*ptr1);
	printf("b : %d\n",*ptr2);
	
}
