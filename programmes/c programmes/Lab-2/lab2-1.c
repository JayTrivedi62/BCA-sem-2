//1. W.A.P. to sort the integer numbers in ascending order. (A)

#include<stdio.h>
void main()
{
	int a[50],i,j,n,temp;
	
	printf("Enter Total element you want to enter \n");
	scanf("%d",&n);
	
	printf("Enter Elements = \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("Ascending araay = \n");
	
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	
}
	

