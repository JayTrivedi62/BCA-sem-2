//3. Count simple interest using a function. (A) 

#include<stdio.h>
float si(float,float,float);
void main()
{
	float p,r,t;
	
	printf("Enter amount \n");
	scanf("%f",&p);
	
	printf("Enter Rate Of Interest \n");
	scanf("%f",&r);
	
	printf("Entet Time \n");
	scanf("%f",&t);
	
	printf("Simple Interest Is %f ",si(p,r,t));
}

float si(float p,float r,float t)
{
	return (p*r*t)/100;
}
