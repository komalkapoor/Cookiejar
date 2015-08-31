/*
 * Code to print the number of leaves in a year
 */
#include <stdio.h>


int main(){
	int total_leaves = 20;
	int annual_leaves = 14;
	int sick_leaves = 6;
	
	total_leaves = (annual_leaves + sick_leaves);
	
	printf(" Total Leaves =  %d \n" ,total_leaves);
	printf(" Annual Leaves =  %d \n" ,annual_leaves);
	printf(" Sick Leaves =  %d \n" ,sick_leaves);
	
return 0;
}
