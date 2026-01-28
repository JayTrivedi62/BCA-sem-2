//5. W.A.P. to copy a string into another string without using the built-in function. (B)
#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int i;
	
	printf("Enter string = \n");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	
	str2[i]='\0';
	
	printf("Copied String =\n");
	puts(str2);
	
}
