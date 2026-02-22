//3. Define a structure called Players which describes details like p_name, team, score, average.
//Write a program to read data for N players and arrange p_name in alphabetical order. (B)

#include<stdio.h>
#include<string.h>

struct player{
	
 		char p_name[50];
 		char team[50];
 		int score;
 		float average;
};

void main(){
	
	int i,j,n;
	
		printf("Enter Total Players \n");
		scanf("%d",&n);
	
		struct player p[n],temp;
		
		printf("Enter Data : \n");
	
	  for(i=0;i<n;i++)
	  {
	  	
	  	printf("Enter %d Name \n",i+1);
	  	scanf("%s",p[i].p_name);
	  	
	  	printf("Enter %d Team Name\n",i+1);
	  	scanf("%s",p[i].team);
	  	
	  	printf("Enter %d score\n",i+1);
	  	scanf("%d",&p[i].score);
	  	
	  	printf("Enter %d Average\n",i+1);
	  	scanf("%f",&p[i].average);
	  	
	  }
	  
	  for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(p[i].p_name,p[j].p_name)>0)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	  
	  printf(" \n\n Your Data : \n \n");
	  
	  for(i=0;i<n;i++)
	  {
	  	printf("%d Name = %s \n",i+1,p[i].p_name);
	  	printf("%d Team Name = %s \n",i+1,p[i].team);
	  	printf("%d Score = %d \n",i+1,p[i].score);
	  	printf("%d Average = %f \n\n",i+1,p[i].average);
	  }
}
