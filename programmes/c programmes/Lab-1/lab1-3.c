#include<stdio.h>
void main()
{
	int n,i,count=0;
	
	printf("Enter the value of n \n");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	
	if(count==0)
	{
		printf("Number Is Prime !!");
	}
	else
	{
		printf("Number Is Not Prime !!");
	}
}
