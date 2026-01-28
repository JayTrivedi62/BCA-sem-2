#include<stdio.h>
int power(int,int);
void main()
{
	int a,n,p;
	
	printf("Enter Number \n");
	scanf("%d",&n);
	
	printf("Enter Power \n");
	scanf("%d",&p);
	
	a=power(n,p);
	
	printf("Power = %d",a);
	
}
int power(int n,int p)
{
	if(p==0)
	{
		return 1;
	}
	else
	{
		return n*power(n,--p);
	}
}







