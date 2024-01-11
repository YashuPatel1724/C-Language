#include<stdio.h>
#include<string.h>
struct student
{
	
	int stu_id, stu_age, stu_standard;
	char stu_name[50] , stu_course[50] , stu_city[50], stu_school[50];
};
main()
{
	char stu_name[50] , stu_course[50] , stu_city[50], stu_school[50];
	struct student student[3];
	int i;
	for(i=0; i<3; i++)
	{
		printf("student %d information : \n\n",i+1);
		printf("enter the id : ");
		scanf("%d",&student[i].stu_id);
		
		printf("enter the name : ");
		scanf("%s",&stu_name);
		strcpy(student[i].stu_name,stu_name);
		
		printf("enter the age : ");
		scanf("%d",&student[i].stu_age);
		
		printf("enter the standard : ");
		scanf("%d",&student[i].stu_standard);
	
		
		printf("enter the course : ");
		scanf("%s",&stu_course);
		strcpy(student[i].stu_course,stu_course);
		
		printf("enter the school name : ");
		scanf("%s",&stu_school);
		strcpy(student[i].stu_school,stu_school);
		
		printf("enter the city : ");
		scanf("%s",&stu_city);
		strcpy(student[i].stu_city,stu_city);
		printf("\n\n");	
		
		printf("student %d information : \n\n",i+1);
		
		
	
		printf("student id is :%d\n",student[i].stu_id);
		
		
		printf("student name is : %s\n",stu_name);
	
		
	
		printf("student age is : %d\n",student[i].stu_age);
		

		printf("student standard is :%d\n",student[i].stu_standard);
	
		
		
		printf("student course is :%s\n",stu_course);
		
		
	
		printf("student school name is :%s\n",stu_school);
		
		
	
		printf("student city is :%s\n",stu_city);
		printf("\n\n");
		
	}
}
