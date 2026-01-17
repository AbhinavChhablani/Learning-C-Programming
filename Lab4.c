// To swap two numbers
#include <stdio.h>
int main(){
	printf("To Swap 2 Numbers.. \n");
	int a,b,c;
	printf("Enter First Number : ");
	scanf("%d",&a);
	printf("Enter Second Number :");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping :- \n");
	printf("New Value of A : %d \n",a);
	printf("New Value of B : %d \n",b);
	return 0;
}