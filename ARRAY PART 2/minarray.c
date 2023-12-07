#include<stdio.h>
main()
{
	 
	int a[5] = {5,45,454,8,4};
	
	int i;
	int min=a[i];
	for(i=0; i<5; i++)
	{
		
		if(min>a[i])
		{
			min = a[i];
		}
		
	}printf("%d ",min);
}
