#include<stdio.h>
int main(){
	int num, i=0;
	printf("enter your number");
	scanf("%d",&num);
	while(num!=0){
		if(num & 1){
			i++;
			
		}
		num= num>>1;
	}
	printf("1s are : %d", i);
	return 0;
}
