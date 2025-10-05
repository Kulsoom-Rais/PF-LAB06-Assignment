#include<stdio.h>
#include<math.h>
int main(){
	float height, length, angle_rad;
	printf("enter the value of height: \t");
	scanf("%f", &height);
	
	printf("enter the angle in radian:\t");
	scanf("%f",&angle_rad);
	
	if(angle_rad==0){
		printf("error, invalid value entered");
	
	}
	
	
	 length=height/tan(angle_rad);
	 printf("length is %.2f", length);
	 return 0;
	
}
