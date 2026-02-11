// To convert Fahrenheit to Celsius
#include <stdio.h>
int main(){
	float F;
	float C;
	printf("Enter Fahrenheit Temperature :");
	scanf("%f",&F);
	C = (F-32)*(5.0/9.0);
	printf("The Celsius Equivalent Of %f Fahrenheit Is %f ",F,C);
}
