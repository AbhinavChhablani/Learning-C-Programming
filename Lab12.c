// To find the sum of digits of a 4 digit number
/*#include <stdio.h>
void main(){
	char a[4];
	printf("Enter The 4 Digit Number :");
	scanf("%s",&a);
	int sum = (a[0]-'0') + (a[1]-'0') + (a[2]-'0') +(a[3]-'0');
	printf("The Sum Of Digits Is %d ",sum);
}*/
#include <stdio.h>
int main(){
	int n,sum=0;
	printf("Enter The 4 Digit Number :");
	scanf("%d",&n);
	for (int i=0;i<4;i++){
		sum += n%10;
		n = n/10;
	}
	printf("The Sum Of Digits Is %d ",sum);
	return 0;
}