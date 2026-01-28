//5. Find all prime numbers between given interval using functions. (C) 
#include<stdio.h>

void prime();

void main()
{
prime();
}

void prime()
{
	int a,b,i,j,count;
	
	printf("Enter Range \n");
	scanf("%d %d",&a,&b);
	
	for(i=a;i<=b;i++)
	{
		count=0;
		
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;	
			}
		}
		
		if(count==2)
		{
		printf("%d \n",i);
		}
	}
	
	printf("Programm executed %d",count);
}



