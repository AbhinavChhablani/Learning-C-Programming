#include <stdio.h>
int main(){
	int nlp[12]={31,59,90,120,151,181,212,243,273,304,334,365};
	int lp[12]={31,60,91,121,152,182,213,244,274,305,335,366};
	int tp,mn;
	printf("Enter 0 for Non-Leap Year and 1 for Leap Year:");
	scanf("%d",&tp);
	printf("Enter Month Number :");
	scanf("%d",&mn);
	if (tp==0){
		printf("The Number Of Days Is %d ",nlp[mn]);
	}
	else {
		printf("The Number Of Days Is %d ",lp[mn]);
	}
	return 0;
}
