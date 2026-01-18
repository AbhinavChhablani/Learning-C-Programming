// To calculate the area of Circle, Rectangle and Triangle using switch case
#include <stdio.h>
#include <math.h>
int main(){
	int selector;
	printf("Enter 0 For Circle ,1 For Rectangle,2 For Triangle :");
	scanf("%d",&selector);
	switch(selector) {
		case 0: {
			float Pi =3.14;
			int radius;
			printf("Enter Radius Of Circle :");
			scanf("%d",&radius);
			float Area = Pi*radius*radius;
			printf("The Area Of Circle Of Radius %d units Is %f units .",radius,Area);
			break;
		}
		case 1: {
			int L,B;
			printf("Enter Length Of Rectangle :");
			scanf("%d",&L);
			printf("Enter Breadth Of Rectangle :");
			scanf("%d",&B);
			int Area = L*B;
			printf("The Area Of Rectangle Of Length %d units And Breadth %d units is %d square units .",L,B,Area);
			break;
		}
		case 2: {
			int s,a,b,c;
			printf("Enter sides Of Triangle (a,b,c):");
			scanf("%d,%d,%d",&a,&b,&c);
			s=(a+b+c)/2;
			float Area = (sqrt(s*(s-a)*(s-b)*(s-c)));
			printf("The Area Of Triangle is %f square units:",Area);
			break;
		}
		default: {
			printf("Invalid Input..");
			break;
		}
	}
	return 0;
}