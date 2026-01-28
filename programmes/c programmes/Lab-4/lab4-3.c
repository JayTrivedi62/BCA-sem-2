//3. Swap two numbers using call by reference. (A)


#include<stdio.h>

void swap(int *,int *);
void main()

{
	int a,b;
	
	printf("Enter A and B \n");
	scanf("%d %d",&a,&b);
	
	printf("Before Swapping a=%d b=%d \n",a,b);
	
	swap(&a,&b);
	
	printf("After Swapping a=%d b=%d \n",a,b);
}

void swap(int *a,int *b)
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}
