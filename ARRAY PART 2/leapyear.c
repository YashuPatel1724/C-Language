#include<stdio.h>
main()
{
	int n,m;
	printf("enter the size of a[n]");
	scanf("%d",&n);
	printf("enter the size of b[m]");
	scanf("%d",&m);
	int leapyear[10];
	
	int i,x=0;
	for(i=n; i<m; i=i+4)
	{
		leapyear[x] = i;a
		x++;
	}
	
	for(i=0; i<10; i++)
	{
		printf("%d ",leapyear[i]);
	}
	
	
}
