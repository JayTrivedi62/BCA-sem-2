//4. Create a structure student with roll number, name and marks of 3 subjects. Read data of N students using array of structure. 
//Calculate total and percentage for each student. Print the details of the top 3 students based on highest total marks. Also 
//print class average percentage. (C) 

#include<stdio.h>
struct student {
	int rn;
	char name[30];
	int mark[3];
	int total[100];
	float pr[100];
};
void main()
{
	int n,i,j;
	printf("enter total students number\n");
	scanf("%d" ,&n);
	
	struct student s[n],temp;
	
	for(i=0;i<n;i++)
	{
		printf("-------------\n");
			
		printf("enter %d rollnumber \n",i+1);
		scanf("%d" ,&s[i].rn);
		printf("enter %d Name \n",i+1);
		scanf("%s" ,s[i].name);
		
		s[i].total[i]=0;
		s[i].pr[i]=0;
		
		for(j=0;j<3;j++)
		{
			printf("enter subject %d \n: " ,j+1);
			scanf("%d" ,&s[i].mark[j]);
			
			s[i].total[i]=s[i].total[i]+s[i].mark[j];
		}
		
		s[i].pr[i]=s[i].total[i]/3;
		
		printf("totl mark: %d \n" ,s[i].total[i]);
		printf("percentage: %f \n" ,s[i].pr[i]);
		
		printf("-------------\n");
	}
	
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].total<s[j].total)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	
	for(i=0;i<3;i++)
	{
		printf("-------------\n");
		printf("%d Roll.No = %d \n",i+1,s[i].rn);
		printf("%d Name = %s \n",i+1,s[i].name);
		for(j=0;j<3;j++)
		{
			printf("%d Mark = %d \n",j+1,s[j].mark[j]);
		}
		printf("%d Total Mark = %d \n",i+1,s[i].total[i]);
		printf("%d Percentage = %f \n",i+1,s[i].pr[i]);
		printf("-------------\n");
	}
	
	
}
