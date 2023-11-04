#include<stdio.h>
main()
{
	int age;
	printf("enter the value of age : ");
	scanf("%d",&age);
	
	if(age>0)
	{
		if(age>100)
		{
			printf("you not enter valid age");
		}
		else
		{
			printf("you enter the postive age");
		}
	}
	else
	{
		if(age==0)
		{
			printf("you enter the netural age");
		}
		else
		{
			printf("you enter the negetive age");
		}
	}
}
