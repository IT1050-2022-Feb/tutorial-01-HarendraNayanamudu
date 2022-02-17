/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */
#include<stdio.h>

int main(void)
{
	int i;
	float mark,average,total;
	
	for(i=1;i<3;i++)
    {
    	printf("\n Input marks for subject %d : ",i);
    	scanf("%f",&mark);
    	
    	total += mark;
    }
	
    for(i=1;i<3;i++)
    {
    	average = total / i;
    }
	
	printf("\n Average of marks : %.2f\n",average);
	
	return 0;
}
