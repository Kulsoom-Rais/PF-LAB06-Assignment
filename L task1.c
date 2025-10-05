#include <stdio.h>
int main(){
	int i=1, sum=0;
	
	do{
		printf("enter your number \t");
		scanf("%d", &i);
		sum=sum+i;
	}while(i!=0);
	
	printf("the sum is %d", sum);

	
	return 0;
}
