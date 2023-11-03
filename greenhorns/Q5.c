#include<stdio.h>
main()
{
	int basesalary,hra,da,ta,grosssalary;
	printf("enter the your salary :  ");
	scanf("%d",&basesalary);
	
	
	hra= basesalary*10/100;
	da= basesalary*5/100;
	ta= basesalary*8/100;
	
	grosssalary=basesalary+hra+da+ta;
	
	
	printf("%d",grosssalary);
	
}
