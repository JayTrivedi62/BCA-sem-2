//1. Create, declare and initialise the structure employee. (A)

#include<stdio.h>

struct employee{
	int id;
	char name[30];
	float salary;
}e1;

void main()
{
	printf("Enter employee details \n");
	
	printf("ID=");
	scanf("%d",&e1.id);
	
	printf("\n Name=");
	scanf("%s",e1.name);
	
	printf("\n Salary=");
	scanf("%f",&e1.salary);
	
	printf("Details =\n");
	printf("ID=%d",e1.id);
	printf("Name=%s",e1.name);
	printf("Salary=%f",e1.salary);
}
