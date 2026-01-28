#include<stdio.h>

int rev(int);

void main()
{
	int n;
	
	printf("Enter Number \n");
	scanf("%d",&n);
	
	printf("Reverse = %d",rev(n));
}

int rev(int n)
{
	int ld,r=0;
	
	if(n==0)
	{
			return r;
	}
	else
	{
		
		r=r*10;
		ld=n%10;
		n=n/10;
		r=r+ld;
		
		rev(n);
	
	}
}





