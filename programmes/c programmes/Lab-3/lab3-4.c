//4. Generate a Fibonacci series of N given numbers using the function name fibbo(). (B) 

#include<stdio.h>
void fib(int);
void main()
{
	int n;
	
	printf("Enter Stop Point \n");
	scanf("%d",&n);
	
	fib(n);
}

void fib(int n)
{
	int i,a=0,b=1,c;
	
		printf("%d \n",a);
		
		
	for(i=1;i<=n;i++)
	{
		c=a+b;;
		b=a;
		a=c;
		
		printf("%d \n",c);
	}
	
}
