#include <stdio.h>
int main() {
	int L1[12]={31,59,90,120,151,181,212,243,273,304,334,365};
	int L2[12]={31,60,91,121,152,182,213,244,274,305,335,366};
	int a,b;
	printf("Enter 1 For Normal Year And 2 For Leap Year :");
	scanf("%d",&a);
	printf("Enter Month Number :");
	scanf("%d",&b);
	if (a==1){
		printf("The Number Of Days Is : %d ",L1[b-1]);
	}
	else {
		printf("The Number Of Days Is : %d ",L2[b-1]);
	}
	return 0;
}