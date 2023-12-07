#include<stdio.h>
main()
{
	 
	int a[5] = {5,45,454,8,4};
	
	int i;
	int max=a[i];
	for(i=0; i<5; i++)
	{
		
		if(max<a[i])
		{
			max = a[i];
		}
		
	}printf("%d ",max);
}
