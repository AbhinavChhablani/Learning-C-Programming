// To calculate the area of a circle
#include <stdio.h>
int main(){
	float Pi = 3.14,Area,Radius;
	printf("Enter The Radius Of Circle :");
	scanf("%f",&Radius);
	Area = Radius*Radius*Pi;
	printf("The Area Of Circle Of Radius %f units Is %f units .",Radius,Area);
	return 0;
}