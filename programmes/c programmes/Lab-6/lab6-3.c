//3. Demonstrate the difference between structure and union. (A) 

#include<stdio.h>

struct s{
	char name[50];
	int id;
}s1;

union u{
	char name[50];
	int id;
}u1;

void main()
{
	
	printf("Structure -- \n\n");
	
	printf("Enter Name : \n");
	scanf("%s",s1.name);
	
	printf("Enter Id : \n");
	scanf("%d",&s1.id);
	
	printf("Name = %s",s1.name);
	printf("Id = %d \n\n",s1.id);
	
	printf("---------\n");
	
	printf("Union -- \n\n");
	
	printf("Enter Name : \n");
	scanf("%s",u1.name);
	
	printf("Enter Id : \n");
	scanf("%d",&u1.id);
	
	printf("Name = %s",u1.name);
	printf("Id = %d",u1.id);
}
