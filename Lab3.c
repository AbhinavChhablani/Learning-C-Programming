// To check whether a number is even or odd
#include <stdio.h>
int main(){
	int a;
	printf("Enter Number To be Checked :");
	scanf("%d",&a);
	if (a%2==0){
		printf("The Given Number Is Even..");
	}
	else {
		printf("The Given Number is Odd..");
	}
	return 0;
}