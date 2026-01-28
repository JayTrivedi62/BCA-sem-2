//4. Perform the task of reversing a number and return that number, then check given number is a palindrome or not. (B)

#include<stdio.h>
int rev(int);
void main()
{
	int n,a;
	
	printf("Enter number \n");
	scanf("%d",&n);
	
	a=rev(n);
	
	printf("Reverse Number = %d",a);
	
	if(n==a)
	{
		printf("Number Is Palindrome ");
	}
	else
	{
		printf("Number Is Not Palindrome ");
	}
}

int rev(int n)
{
	int i,a=0,d;
	
	for(i=1;n>0;i++)
	{
		a=a*10;
		d=n%10;
		n=n/10;
		a=a+d;
	}
	
	return a;
}
