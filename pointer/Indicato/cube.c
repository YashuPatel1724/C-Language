#include<stdio.h>
#include<string.h>
void cube(int r,int c,int a[r][c])
{
	int i,j,ans;
	int *ptr = &a[0][0];
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",(*ptr) *  (*ptr) * (*ptr));
			ptr++;
		}
	}
	
}
main()
{
	int r=2,c=2;
	int a[r][c];
	int i,j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	cube(r,c,a);
	

}
