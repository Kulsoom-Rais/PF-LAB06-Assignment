#include<stdio.h>
int main(){
	int withdraw=0, balance=50000;
	printf("enter your current balance: \t");
	scanf("%d", &balance);
	while(balance>0){
		printf("How much you want to withdraw? \t");
		scanf("%d", &withdraw);
		
		
		if(withdraw<=0){
			printf("invalid entry\n");
					
		}
		else if (withdraw>balance){
			printf("insufficient balance\n");
		}
		else{
			balance=balance-withdraw;
			
			printf("withdraw successful. \n your updated bank balance is %d \n", balance);
			
		}
		
	}
	if(balance==0){
	printf("\n your bank balance is 0 now. \n Thank you for using ATM");	
	}
	return 0;
}
