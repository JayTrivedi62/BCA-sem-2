//4. Demonstrate nested structure. (B) 

#include<stdio.h>

struct s1{
	char name[30];
	int id;
};

struct s2{
	
	struct s1 a;
	
	int marks;
	char grade[1];
}b;

void main()
{
	printf("Enter Name : \n");
	scanf("%s",b.a.name);
	
	printf("Enter Id : \n");
	scanf("%d",&b.a.id);
	
	printf("Enter Markss : \n");
	scanf("%d",&b.marks);
	
	printf("Enter Grade : \n");
	scanf("%s",b.grade);
	
	printf("---------\n");
	
	printf("Name = %s \n",b.a.name);
	printf("Id = %d \n",b.a.id);
	printf("Marks = %d \n",b.marks);
	printf("Grade = %s",b.grade);
}
