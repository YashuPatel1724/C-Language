#include<stdio.h>
main()
{
	int n;
	printf("enter the size of array : ");
	scanf("%d",&n);
	char a[n];
	printf("enter the name : ");
	scanf("%s",&a);
	
	int i,length=0;
	printf("reverse string is  : ");
	for(i=n-1; i>=0; i--)
	{
		printf("%c",a[i]);
	}
	
}
