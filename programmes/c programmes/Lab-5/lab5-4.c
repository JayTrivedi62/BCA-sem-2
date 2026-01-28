#include<stdio.h>

int a[5],b[5],c,i;

void swap(int a[],int b[]);

void main()
{
	printf("Enter First array \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter Second array \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	
	swap(a,b);
	
	
	printf("First array \n");
	
	for(i=0;i<5;i++)
	{
		printf("%d \n",a[i]);
	}
	
	printf("Second array \n");
	
	for(i=0;i<5;i++)
	{
		printf("%d \n",b[i]);
	}
}

void swap(int a[],int b[])
{
	
	for(i=0;i<5;i++)
	{
		c=a[i];
		a[i]=b[i];
		b[i]=c;
	}
}

