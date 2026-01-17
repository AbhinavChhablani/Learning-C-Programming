// To convert Fahrenheit to Celsius and vice versa
#include <stdio.h>
int main(){
	int choice;
	float Value;
	printf("Select Option :-\n");
	printf("1.Fahrenheit To Celsius \n 2.Celsius To Fahrenheit(Choose 1 Or 2)");
	printf("Choice:");
	scanf("%d",&choice);
	printf("Enter Value:");
	scanf("%f",&Value);
	if (choice==1){
	float C=(Value-32)*5.0/9.0;
	printf("The Celsius Value Of %f Degree Fahrenheit is %.2f Celsius ",Value,C);
	}
	else if (choice==2){
	float F =(9.0*(Value)/5.0)+32.0;
	printf("The Fahrenheit Value Of %f Degree Celsius Is %.2f Fahrenheit ",Value,F);
	}
	return 0;
}