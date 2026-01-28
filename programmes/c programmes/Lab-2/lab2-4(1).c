//4. W.A.P. to calculate the reverse string without using the inbuilt function. (A) 

#include<stdio.h>
void main()
{
	char str1[100];
	int i,len=0;
	
	printf("Enter string = \n");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		len++;
	}
	
	printf("Length is string = %d ",len);
	
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str1[i]);
	}
}
