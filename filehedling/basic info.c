#include<stdio.h>
main()
{
	FILE *fp;
	fp = fopen("information.html","w");
	char name[20], hobby[20],course[20], skill[20], gender[20];
	int age;

	printf("enter your name : ");
	gets(name);
	
	printf("enter your hobby : ");
	gets(hobby);
	
	printf("enter your course: ");
	gets(course);
	
	printf("enter your skill: ");
	gets(skill);
	
	printf("enter your gender: ");
	gets(gender);
	
	printf("enter your age: ");
	scanf("%d",&age);
	
	
	
	
	printf("%s\n",name);
	
	printf("%s\n",hobby);
	
	printf("%s\n",course);
	
	printf("%d\n",age);
	
	printf("%s\n",skill);
	
	printf("%s\n",gender);
			
			
	
	fprintf(fp,"<h1>Name is :%s </h1>\n",name);
	fprintf(fp,"<h2>age is :%d </h2>\n",age);
	fprintf(fp,"<h3>course is :%s </h3>\n",course);
	fprintf(fp,"<h4>skill is :%s </h4>\n",skill);
	fprintf(fp,"<h5>hobby is :%s </h5>\n",hobby);
	fprintf(fp,"<h6>gender is :%s </h6>\n",gender);
	
}
