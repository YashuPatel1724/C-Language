#include<stdio.h>

main()
{
	char a;
	
	printf("Q1. select language");
	printf("\n1. gujarti");
	printf("\n2. english");
	printf("\n3. hindi");
	
		printf("\npress num : ");
		scanf(" %c",&a);
		
		switch(a)
		{
			case '1' : printf("gujarti");
				printf("\n\nQ2. enter the problems");
				printf("\n1. internet connection");
				printf("\n2. simcard problems ");
				printf("\n3. employee talk");
				
				printf("\npress num : ");
				scanf(" %c",&a);
				
				switch(a)
				{
					case '1' : printf("internet connection");
					printf("\n\nQ3. enter interner problems");
						printf("\n1. slow speed");
						printf("\n2. internet not working ");
						
						printf("\npress num : ");
						scanf(" %c",&a);
						
						switch(a)
						{
							case '1' : printf("slow speed");
							break;
							case '2' : printf("internet not working");
							break;
							default : printf("enter the valid value");
							break;
						}
						
					break;		
					case '2' : printf("simcard problems");
					break;
					case '3' : printf("employee talk");
					break;
					default : printf("enter the valid value");
					break;
				}	
			
			break;	
			case '2' : printf("english");
			printf("\n\nQ2. enter the problems");
				printf("\n1. internet connection");
				printf("\n2. simcard problems ");
				printf("\n3. employee talk");
				
				printf("\npress num : ");
				scanf(" %c",&a);
				
				switch(a)
				{
					case '1' : printf("internet connection");
					printf("\n\nQ3. enter interner problems");
						printf("\n1. slow speed");
						printf("\n2. internet not working ");
						
						printf("\npress num : ");
						scanf(" %c",&a);
						
						switch(a)
						{
							case '1' : printf("slow speed");
							break;
							case '2' : printf("internet not working");
							break;
							default : printf("enter the valid value");
							break;
						}
						
						break;
						case '3' : printf("hindi");
						
						break;
						default : printf("enter the valid value");
						break;
						
				}
		
		}
}
