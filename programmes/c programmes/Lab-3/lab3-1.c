//1. Add two numbers using a user-defined function. (A)

#include<stdio.h>

int sum(int,int);

void main()
{
	int a,b;
	
	printf("Enter First Number : \n");
	scanf("%d",&a);	
	
	printf("Enter Second Number : \n");
	scanf("%d",&b);	
	
	printf("Adition Of Two Number Is %d",sum(a,b));
	
}

int sum(int a,int b)
{
	return (a+b);
}
