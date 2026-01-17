// To check whether a number is prime or not
#include <stdio.h>
int main(){
	int a,n=0;
	printf("Enter Number :");
	scanf("%d",&a);
	for (int i=2;i<=a/2;i++){
		if (a%i==0){
			n = n+1;	
		}
	}
	if (n<1){
		printf("Given Number Is Prime");
	}
	else {
		printf("Given Number is Not Prime");
	}
	return 0;
}