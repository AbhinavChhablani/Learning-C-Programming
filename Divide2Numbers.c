// To divide two numbers
#include <stdio.h>
int main (){
	int a,b;
	printf("Enter Dividend :");
	scanf("%d",&a);
	printf("Enter Divisor :");
	scanf("%d",&b);
	float c = (float)a/b;
	printf("%d Divide by %d is %f ",a,b,c);
	return 0;
}
