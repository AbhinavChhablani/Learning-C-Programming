#include<stdio.h>
#include <math.h>
//Lagrange's Inter polation
int main (){
	int n;
	scanf("%d",&n);
	float arr1[n],arr2[n];
	for (int i=0;i<n;i++){
		printf("Enter x%d :",i);
		scanf("%f",&arr1[i]);
		printf("Enter y%d :",i);
		scanf("%f",&arr2[i]);
	}
	float x;
	printf("Enter x:");
	scanf("%f",&x);
	float ans=0;
	for (int i = 0;i<n;i++){
		float ansn=1,ansd=1;
		for(int j =0;j<n;j++){
			if (j!=i){
				ansn*=(x-arr1[j]);
			}
			if (j!=i){
				ansd*=(arr1[i]-arr1[j]);
			}
		}
		printf("%f\n",(ansn*arr2[i])/ansd);
		ans+=(ansn*arr2[i])/ansd;
	}
	printf("The Lagrange Interpolation is : %f",ans);
	return 0;
}