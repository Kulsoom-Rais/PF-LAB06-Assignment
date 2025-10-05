#include<stdio.h>
int main(){
	int a,b;
	printf("enter your number");
	scanf("%d", &a);
	
	if(a&1){
		printf("number is odd");
		
	}
	else {
		printf("number is even");
		
	}
	return 0;
}
