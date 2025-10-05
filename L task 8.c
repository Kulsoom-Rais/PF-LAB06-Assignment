#include<stdio.h>
#include<math.h>
int main(){
	int intensity, stand_ref_value;
	float magnitude;
	printf("enter the intensity of earthquake: \t");
	scanf("%d", &intensity);
	
	printf("enter the standard reference value: \t");
	scanf("%d",&stand_ref_value);
	
	magnitude=log10(intensity/stand_ref_value);
	printf("the magnitude of earthquake is: %.2f", magnitude);
	return 0;
}
