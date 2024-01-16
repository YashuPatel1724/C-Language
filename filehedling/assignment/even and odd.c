#include<stdio.h>
main()
{
	FILE *even;
	FILE *odd;
	even = fopen("even_file.txt","w");
	odd = fopen("odd_file.txt","w");
	
	int i;
	printf(even,"even number is :");
	for(i=50; i<=70; i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
			fprintf(even,"%d ",i);
		}
	}
	printf("\n\n");
	printf(odd,"odd number is :");
	for(i=50; i<=70; i++)
	{
		if(i%2==1)
		{
			printf("%d ",i);
			fprintf(odd,"%d ",i);
		}
	}
}
