// To convert seconds into hours, minutes and seconds
#include <stdio.h>
int main(){
	int sec,hour,minute;
	printf("Enter Number Of Seconds :");
	scanf("%d",&sec);
	hour = sec/3600;
	sec=sec%3600;
	minute=sec/60;
	sec=sec%60;
	printf("The Total Time is %d Hours, %d Minutes And %d Seconds \n",hour,minute,sec);
	return 0;
}
	