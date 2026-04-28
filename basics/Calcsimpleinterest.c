// To calculate Simple Interest
#include <stdio.h>
int main(){
	float P,R,T;
	printf("Enter Principal Amount :");
	scanf("%f",&P);
	printf("Enter Interest Rate :");
	scanf("%f",&R);
	R = R/100.0;
	printf("Enter Investment Time :");
	scanf("%f",&T);
	float A = P*(1+R*T);
	float I = P*R*T;
	printf("The Total Amount is %f And Interest Recieved is %f ",A,I);
	return 0;
}
