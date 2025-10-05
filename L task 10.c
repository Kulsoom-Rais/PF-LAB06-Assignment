#include<stdio.h>
#include<math.h>
int main(){
	int n,t;
	float A, P, r;
	printf("enter initial investment amount(P)");
	scanf("%f",&P);
	
		printf("enter interest per period(r)");
 	    scanf("%f",&r);
	
		printf("enter number of compunding periods per year(n)");
	    scanf("%d",&n);
	    
		printf("enter number of years(t)");
	    scanf("%d",&t);
	    
	    A=P*pow((1+r/n),n*t);
	    printf("your future investment value is: %f", A);
	    return 0;
	
	
}
