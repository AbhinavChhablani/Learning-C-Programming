// To swap two numbers without using a third variable
#include <stdio.h>
int main(){
	int a,b;
	printf("Enter First Variable :");
	scanf("%d",&a);
	printf("Enter Second Variable :");
	scanf("%d",&b);
	a= a + b;
	b= a - b;
	a= a - b;
	printf("After Swap Values:%d And %d .",a,b);
	return 0;
}