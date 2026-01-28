#include<stdio.h>

int fact(int);

void main()
{
	int n;
	
	printf("Enter Number \n");
	scanf("%d",&n);
	
	printf("Factorial Of %d Is %d",n,fact(n));
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






