//3. Create structure student with name, percentage and age. Read data of N students using array of structure. Arrange student  
//data alphabetically and print all data. (B) 

#include<stdio.h>
#include<string.h>

struct student{
	char name[30];
	float per;
	int age;
};

void main()
{
	int i,j,n;
	
	printf("Enter Total Students \n");
	scanf("%d",&n);
	
	struct student s[n],temp;
	
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
		for(j=i+1;j<n;j++)
		{
			if(strcmp(s[i].name,s[j].name)>0)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("-------------\n");
		printf("%d Name = %s \n",i+1,s[i].name);
		printf("%d Percentage = %f \n",i+1,s[i].per);
		printf("%d Age = %d \n",i+1,s[i].age);
		printf("-------------\n");
	}
	
}
