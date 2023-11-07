#include<stdio.h>
main()
{
	char month;
	printf("enter the month : ");
	scanf(" %c",&month);
	
	switch(month)
	{
		case 'J' : printf("January - 31");
		break;
		case 'F' : printf("Fabruary - 28");
		break;
		case 'M' : printf("March - 31");
		break;
		case 'A' : printf("April - 30");
		break;
		case 'm' : printf("May - 31");
		break;
		case 'jun' : printf("Jun - 30");
		break;
		case 'j' : printf("July - 31");
		break;
		case 'a' : printf("Augest - 31");
		break;
		case 'S' : printf("September - 30");
		break;
		case 'O' : printf("october - 31");
		break;
		case 'D' : printf("December - 30");
		break;
		default : printf("enter the valid value");
	}
}
