#include<stdio.h>
#include<string.h>
struct student
{
	
	int emp_id,  emp_age, emp_experience;
	char emp_name[50] , emp_role[50] , emp_company_name[50],  emp_city[50];
};
main()
{
	char emp_name[50] ,  emp_role[50] ,  emp_company_name[50],  emp_city[50];
	struct student employment[3];
	int i;
	for(i=0; i<3; i++)
	{
		printf("student %d information : \n\n",i+1);
		printf("enter the id : ");
		scanf("%d",&employment[i].emp_id);
		
		printf("enter the name : ");
		scanf("%s",& emp_name);
		strcpy(employment[i].emp_name,emp_name);
		
		printf("enter the age : ") ;
		scanf("%d",&employment[i].emp_age);
		
		printf("enter the experience : ");
		scanf("%d",&employment[i].emp_experience);
	
		
		printf("enter the role : ");
		scanf("%s",&emp_role);
		strcpy(employment[i].emp_role,emp_role);
		
		printf("enter the company name : ");
		scanf("%s",&emp_company_name);
		strcpy(employment[i].emp_company_name,emp_company_name);
		
		printf("enter the city : ");
		scanf("%s",&emp_city);
		strcpy(employment[i].emp_city,emp_city);
		printf("\n\n");	
		
		printf("student %d information : \n\n",i+1);
		
		
	
		printf("employment id is :%d\n",employment[i].emp_id);
		
		
		printf("employment name is : %s\n",employment[i].emp_name);
	
		
	
		printf("employment age is : %d\n",employment[i].emp_age);
		

		printf("employment experience  is :%d\n",employment[i].emp_experience);
	
		
		
		printf("employment role is :%s\n",employment[i].emp_role);
		
		
	
		printf("employment company name is :%s\n",employment[i].emp_company_name);
		
		
	
		printf("employment city is :%s\n",employment[i].emp_city);
		
	}
}
