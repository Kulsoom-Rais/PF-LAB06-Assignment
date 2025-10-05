#include<stdio.h>
int main(){
	int a,b;
	printf("enter the value of a");
	scanf("%d", &a);
	
    printf("enter the value of b");
	scanf("%d", &b);	
	a=a^b;
	b=b^a;
	a=a^b;
	
	printf("after swapping : a=%d and b=%d", a, b);
	return 0;
	
}
