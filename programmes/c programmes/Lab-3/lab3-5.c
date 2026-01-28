//5. Find given number is prime or not using a function. (C)

#include<stdio.h>
void prime(int);
void main()
{
	int n;
	
	printf("Enter Number \n");
	scanf("%d",&n);
	
	prime(n);
}

void prime(int n)
{
	int i,count=0;
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	
	if(count==0)
	{
		printf("Number Is Prime");
	}
	else
	{
		printf("Number Is Not Prime");
	}
}
