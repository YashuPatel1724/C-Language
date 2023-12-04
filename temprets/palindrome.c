//7. wap to check number is palindrom or not.

#include<stdio.h>

main()
{
	int n, pal = 0,a,y;
	
	printf("Enter the num : ");
	scanf("%d",&n);
	
	a = n;//a=121
	
	for(;n>0;)
	{	
		y=n%10;//1  -- y=12%10 = 2  --  y=1%10 = 1
		pal = y + (pal*10);//1+0=1  -- pal = 2+10 = 12  -- pal =1+120=121
		n=n/10;//12  --   n=n/10 =  12=12/10 = 1  --  n= n/10 = 1/10 = 0
	}
	if(pal == a)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	
}
