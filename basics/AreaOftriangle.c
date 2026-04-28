#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,S,Area;
	printf("Enter The Length of Side a :");
	scanf("%f",&a);
	printf("Enter The Length of Side b :");
	scanf("%f",&b);
	printf("Enter The Length of Side c :");
	scanf("%f",&c);
	S= (a+b+c)/2;
	if (a+b>c || b+c>a || a+c>b) {
		Area = sqrt(S*(S-a)*(S-b)*(S-c));
		printf("The Area Of triangle is %f ",Area);
	}
	else {
		printf("Not A Real Triangle");
	}
	return 0;
}
