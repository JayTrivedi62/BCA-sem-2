//4. Define a structure called Players which describes details like p_name, team, score and average.
//Write a program to read data for N players using array of structure.
//Calculate the highest score and display the details of the top 3 players based on score. 
//Also arrange all players in alphabetical order of p_name and print the sorted list. (C) 

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
	  
	  printf("\n\n TOP - 3 Players \n");
	  
	  for(i=0;i<n;i++)
	  {
	  	for(j=i+1;j<n;j++)
	  	{
	  		if(p[j].score>p[i].score)
	  		{
	  			temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	  }
	  
	  for(i=0;i<3;i++)
	  {
	  	printf("%d Name = %s \n",i+1,p[i].p_name);
	  	printf("%d Team Name = %s \n",i+1,p[i].team);
	  	printf("%d Score = %d \n",i+1,p[i].score);
	  	printf("%d Average = %f \n\n",i+1,p[i].average);
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
	  
	  printf(" \n\n Your All Data : \n \n");
	  
	  for(i=0;i<n;i++)
	  {
	  	printf("%d Name = %s \n",i+1,p[i].p_name);
	  	printf("%d Team Name = %s \n",i+1,p[i].team);
	  	printf("%d Score = %d \n",i+1,p[i].score);
	  	printf("%d Average = %f \n\n",i+1,p[i].average);
	  }
}
