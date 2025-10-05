#include<stdio.h>
int main(){
	int part,i;
	unsigned long long factorial = 1;
	printf("How many participants are there: \t");
	scanf("%d", &part);
	if (part<0){
		printf("invalid data entry");
	}
	else{
		for (i=1; i<=part; i++){
			factorial=factorial*i;
		}
	}
	
	printf("the factorial of  %d is %llu \n", part, factorial);
	return 0;
}
