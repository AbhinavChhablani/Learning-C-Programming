// To calculate the area of a rectangle
#include <stdio.h>
int main(){
	int L,B;
	printf("Enter Length : ");
	scanf("%d",&L);
	printf("Enter Breadth : ");
	scanf("%d",&B);
	int A = L*B;
	printf("The Area Of Rectangle Is %d",A);
	return 0;
}