//2. Find the maximum number between two numbers using a function. (A) 

#include<stdio.h>

int max(int,int);

void main()
{
	int a,b;
	
	printf("Enter First Number : \n");
	scanf("%d",&a);	
	
	printf("Enter Second Number : \n");
	scanf("%d",&b);	
	
	printf("Maximum Number Is %d",max(a,b));
	
}

int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
