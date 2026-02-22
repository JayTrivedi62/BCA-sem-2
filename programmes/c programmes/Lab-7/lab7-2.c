//2. Create structure student with name, percentage and age. Read data of N students using array of structure. Print details of  
//student with maximum percentage. (A)

#include<stdio.h>

struct student{
	char name[30];
	float per;
	int age;
};

void main()
{
	int i,n,max=0;
	
	printf("Enter Total Students \n");
	scanf("%d",&n);
	
	struct student s[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter %d Name \n",i+1);
		scanf("%s", s[i].name);
		
		printf("Enter %d Percentage \n",i+1);
		scanf("%f",&s[i].per);
		
		printf("Enter %d Age \n",i+1);
		scanf("%d",&s[i].age);
	}
	
	for(i=0;i<n;i++)
	{
			if(s[i].per>s[max].per)
			{
				max=i;
			}
	}
	
	printf("____________\n");
	printf("Name= %s \n",s[max].name);
	printf("Percentage= %f \n",s[max].per);
	printf("Age= %d \n",s[max].age);
	printf("____________\n");
	
}
