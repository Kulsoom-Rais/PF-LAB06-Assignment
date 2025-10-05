#include<stdio.h>
int main(){
	int i, product, j;
	printf("enter your number: \t");
	scanf("%d", &i);
	for(j=1; j<=10; j++){
		
		product= i*j;
			
		printf("%d x %d = %d \n", i,j, product );
	}
	return 0;
}
