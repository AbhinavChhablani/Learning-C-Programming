// To convert millimeters to feet, inches, centimeters and millimeters
#include <stdio.h>
int main(){
	int mm,inch,feet,cm;
	printf("Enter The Number Of Milimeters :");
	scanf("%d",&mm);
	feet = mm/300;
	mm = mm%300;
	inch = mm/25;
	mm = mm%25;
	cm = mm/10;
	mm= mm%10;
	printf("The Total Distance is %d Feet, %d Inch , %d cm and %d mm ..",feet,inch,cm,mm);
	return 0;
}
