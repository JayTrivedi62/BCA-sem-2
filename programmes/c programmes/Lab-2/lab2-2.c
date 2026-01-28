//2. W.A.P. to add two 3*3 matrices. (A) 
#include<stdio.h>
void main()
{
	int j1[3][3],j2[3][3],i,j,n=3;
	
	printf("Enter 1st matrix = \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&j1[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter 2nd matrix = \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&j2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		j1[i][j]=j1[i][j]+j2[i][j];
		}
	}
	
	printf("Total matrix =\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d ",j1[i][j]);
		}
		printf("\n");
	}
	
	
}
