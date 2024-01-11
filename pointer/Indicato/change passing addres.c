#include<stdio.h>
#include<string.h>
void add(int *a)
{
	*a = *a + 1;
	
}
main()
{
	int a;
	printf("enter the value : ");
	scanf("%d",&a);
	add(&a);
	printf("%d",a);
	

}
