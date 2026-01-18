#include <stdio.h>
int main(){
	int score;
	printf("Enter The Score :");
	scanf("%d",&score);
	if (score>=9){
		printf("Your grade is A ");
	}
	else if (score>=7 && score <9) {
		printf("Your Grade Is B ");
	}
	else if (score>=5 && score <7) {
		printf("Your Grade Is C ");
	}
	else if (score>=3 && score <5) {
		printf("Your Grade Is D ");
	}
	else {
		printf("Your Grade Is F ");
	}
	return 0;
}