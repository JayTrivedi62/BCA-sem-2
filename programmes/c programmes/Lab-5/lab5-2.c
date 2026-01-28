#include<stdio.h>

void arrayprint(int a[]);

void main()
{
	int a[10],i;
	
	printf("Enter array \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Array Elements \n");
	arrayprint(a);
}

void arrayprint(int a[])
{
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("%d \n",a[i]);
	}
}




