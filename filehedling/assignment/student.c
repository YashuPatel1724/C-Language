#include<stdio.h>
#include<string.h>
struct student
{
	
	int Rollno, chem_marks, maths_marks, phy_marks;
	char stu_name[50];
};
main()
{
	FILE *sheet;
	
	sheet = fopen("markssheet.xlsx","w");
	

	char stu_name[50];
	struct student student[5];
	int i;
	for(i=0; i<5; i++)
	{
		printf("student %d information : \n\n",i+1);
		
		
		printf("enter the roll no: ");
		scanf("%d",&student[i].Rollno);
		
		printf("enter the name : ");
		scanf("%s",stu_name);
		strcpy(student[i].stu_name,stu_name);
		
		printf("enter thechem: ");
		scanf("%d",&student[i].chem_marks);
		
		printf("enter the maths : ");
		scanf("%d",&student[i].maths_marks);
		
		printf("enter the phy: ");
		scanf("%d",&student[i].phy_marks);
	
		printf("\n\n");	
		
		printf("student %d information : \n\n",i+1);
		
		
	
		printf("student roll no is :%d\n",student[i].Rollno);
		
		
		printf("student name is : %s\n",stu_name);
	
		
	
		printf("student chem marks is : %d\n",student[i].chem_marks);
		

		printf("student maths marks :%d\n",student[i].maths_marks);
	
		printf("student phy marks :%d\n",student[i].phy_marks);
		
		
		
		
		fprintf(sheet,"student roll no is :%d\n",student[i].Rollno);
		
		
		fprintf(sheet,"student name is : %s\n",stu_name);
	
		
	
		fprintf(sheet,"student chem marks is : %d\n",student[i].chem_marks);
		

		fprintf(sheet,"student maths marks :%d\n",student[i].maths_marks);
	
		fprintf(sheet,"student phy marks :%d\n",student[i].phy_marks);
		
		printf("\n\n");
		
	}
}
