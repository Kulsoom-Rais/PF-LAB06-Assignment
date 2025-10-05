#include<stdio.h>
#include<math.h>
int main(){
	int no_of_people;
	float perperson=250.50, totalcost, roundedcost;
	
	printf("enter the no of people in a group:\t");
	scanf("%d", &no_of_people);
	totalcost=no_of_people*perperson;
	roundedcost=ceil(totalcost);
	
	printf("the minimum total cost for a group is %.0f", roundedcost);
	return 0; 

	
}
	

