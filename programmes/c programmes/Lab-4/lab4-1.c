//1. Return the maximum of three floating-point numbers. (A)

#include<stdio.h>
float max(float,float,float);
void main()
{
	float a,b,c;
	
	printf("Enter First Number \n");
	scanf("%f",&a);
	
	printf("Enter Second Number \n");
	scanf("%f",&b);
	
	printf("Enter Third Number \n");
	scanf("%f",&c);
	
	printf("Maximum Of Three Number Is %f",max(a,b,c));
	
}

float max(float a,float b,float c)
{
	if(a>b && a>c)
	{
		return a;
	}
	else if(b>a && b>c)
	{
		return b;
	}
	else
	{
		return c;
	}
}



