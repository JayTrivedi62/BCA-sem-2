//5. Add two distances in feet and inches using structure. (C) 

#include<stdio.h>
struct distance
{
	int inch;
	int feet;
	int total;
}d1,d2,d3;

void main()
{
	printf("Enter 1st Ditance \n");
	printf("Feet = ");
	scanf("%d",&d1.feet);
	printf("Inches = ");
	scanf("%d",&d1.inch);
	
	printf("Enter 2nd Ditance \n");
	printf("Feet = ");
	scanf("%d",&d2.feet);
	printf("Inches = ");
	scanf("%d",&d2.inch);
	
	d3.feet=d1.feet+d2.feet;
	d3.inch=d1.inch+d2.inch;
	
	while(d3.inch>=12)
	{
		d3.feet++;
		d3.inch=d3.inch-12;
	}
	
	printf("Sum Of Two Distance = %d Feet %d Inches",d3.feet,d3.inch);	
}
