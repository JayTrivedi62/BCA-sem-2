//1. Create structure student with name, percentage and age. Read data of 5 students using array of structure. (A) 

#include<stdio.h>

struct student{
	char name[30];
	float per;
	int age;
}s[5];

void main()
{
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter %d Name \n",i+1);
		scanf("%s", s[i].name);
		
		printf("Enter %d Percentage \n",i+1);
		scanf("%f",&s[i].per);
		
		printf("Enter %d Age \n",i+1);
		scanf("%d",&s[i].age);
	}
	
	printf("Your Data : ----------------- \n");
	
	for(i=0;i<5;i++)
	{
		printf("-------------\n");
		printf("%d Name = %s \n",i+1,s[i].name);
		printf("%d Name = %f \n",i+1,s[i].per);
		printf("%d Name = %d \n",i+1,s[i].age);
		printf("-------------\n");
	}
	
	
	
}

