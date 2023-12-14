#include<stdio.h>
main()
{
	// yashu patel a - 2 times
	char name[50];
	printf("enter the name  : ");
	gets(name);
	int legth=strlen(name);
	int i,j;
	for(i=0; i<legth; i++)
	{
		int count=1;
		int check=0;
		for(j=i+1; j<legth; j++)
		{
			if(name[i]==name[j])
			{
				count++;
				name[j] =1;
			}
		}
		if(name[j]!=1)
		{
			printf("%c --> %d\n",name[i],count);
		}
	
	}
}
