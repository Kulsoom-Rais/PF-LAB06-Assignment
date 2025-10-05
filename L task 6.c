#include<stdio.h>
int main(){
	int num, reverse, remainder;
	printf("enter digits: \t");
	scanf("%d", &num);
	while (num!=0){
		remainder=num%10;
		reverse=reverse*10;
		reverse=reverse+remainder;
		num=num/10;
	}
	printf("reverse num: %d", reverse);
	return 0;
	
}
