//1. Define a structure called Players which describes details like p_name, team, score, average. 
//Write a program to read data for 3 players and print that data. (A) 

#include<stdio.h>

struct player{
	
 		char p_name[50];
 		char team[50];
 		int score;
 		float average;
}p[3];

void main(){
	
	int i;
	
		printf("Enter Data : \n");
	
	  for(i=0;i<3;i++)
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
	  
	  printf(" \n\n Your Data : \n \n");
	  
	  for(i=0;i<3;i++)
	  {
	  	printf("%d Name = %s \n",i+1,p[i].p_name);
	  	printf("%d Team Name = %s \n",i+1,p[i].team);
	  	printf("%d Score = %d \n",i+1,p[i].score);
	  	printf("%d Average = %f \n\n",i+1,p[i].average);
	  }
}


