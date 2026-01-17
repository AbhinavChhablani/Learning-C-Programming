// To find the greater of two numbers
#include <stdio.h>
int main(){
	int a,b;
	printf(" Enter First Number :");
	scanf("%d",&a);
	printf(" Enter Second Number :");
	scanf("%d",&b);
	if(a>b){
		printf(" %d Is The Greater Number ",a);
	}
	else if(b>a){
		printf(" %d Is The Greater Number ",b);
	}
	return 0; 
}