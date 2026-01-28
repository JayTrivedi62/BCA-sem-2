//7.. W.A.P. to perform an insertion operation on 1 – D array. (C) 

#include<stdio.h>
void main()
{
	int arr1[100],i,ele,pos,n;
	
	printf("Enter array size \n");
	scanf("%d",&n);
	
	printf("Enter Array = \n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter Element \n");
	scanf("%d",&ele);
	
	printf("Enter Position \n");
	scanf("%d",&pos);
	
	for(i=n-1;i<=pos-1;i--)
	{
		arr1[i+1]=arr1[i];
	}
	
	arr1[pos-1]=ele;
	
	printf("Final Array \n");
	
	for(i=0;i<n;i++)
	{
		printf("%d",arr1[i]);
	}
}
