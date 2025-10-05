#include<stdio.h>
int main(){
	int num1, mul2, mul4, mul8;
	
	printf("enter your number: \t");
	scanf("%d", &num1);
	
	mul2=num1<<1;
	mul4=num1<<2;
	mul8=num1<<3;
	
	printf("%d*2= %d\n", num1, mul2);
	printf("%d*4= %d\n", num1, mul4);
	printf("%d*8= %d\n", num1, mul8);
	
	return 0;
	
}
