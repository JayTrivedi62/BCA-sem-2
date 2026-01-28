//recursion 

#include<stdio.h>

void series(int);
int fact(int);

void main()
{
	int n;
	
	printf("Enter Number \n");
	scanf("%d",&n);
	
	printf("Series Print \n");
	
	series(n);
	
	printf("Factorial Of %d is %d",n,fact(n));
}

void series(int n)
{
	if(n==1)
	{
		printf("%d \n",n);
	}
	else
	{
		series(n-1);
		printf("%d \n",n);	
	}
}

int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}


