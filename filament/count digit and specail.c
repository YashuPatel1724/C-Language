#include<stdio.h>
#include<string.h>
main()
{
	char name[50];
	printf("enter the name : ");
	gets(name);
	int len = strlen(name);
	
	int i,alph=0,digit=0,special=0;
	for(i=0; i<len; i++)
	{
		if(name[i]>=65 && name[i]<=90 || name[i]>=97 && name[i]<=122)
		{
			alph++;
		}
		if(name[i]>=48 && name[i]<=57)
		{
			digit++;
		}
		if(name[i]>=33 && name[i]<=47 || name[i]>=58 && name[i]<=64)
		{
			special++;
		}
	}
	printf("aplhbet is  : %d\n",alph);
	printf("digit is  : %d\n",digit);
	printf("special is : %d\n",special);
}
