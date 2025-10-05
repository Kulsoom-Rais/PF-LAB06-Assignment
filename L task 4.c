#include<stdio.h>
int main(){
	int num, original, digit, sum=0;
	
	printf("enter the three digit number: \t");
	scanf("%d",&num);
	
	original=num;
	
	while(num!=0){
		digit=num%10;
		sum=sum+digit*digit*digit;
		num=num/10;
	}
	if(sum==original){
		printf("It is an Armstrong number");
	}
	else{
		printf("It is not an Armstrong number");
	}
	return 0;
}
