#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,r1,r2;
	printf("Enter The Coefficient Of x^2 :");
	scanf("%f",&a);
	printf("Enter The Coefficient Of x :");
	scanf("%f",&b);
	printf("Enter The Constant :");
	scanf("%f",&c);
	r1 = (-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
	r2 = (-b - sqrt(pow(b,2) - 4*a*c))/(2*a);
	printf("The Roots Of The Equation -> %fx^2 + (%fx) +(%f) are %f and %f .",a,b,c,r1,r2);
	return 0;
}	
	
