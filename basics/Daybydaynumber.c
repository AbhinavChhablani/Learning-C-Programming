#include <stdio.h>
int main(){
    int n;
    char day[7][10] ={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    printf("Enter The Day Number :");
    scanf("%d",&n);
    printf("The Day Is %s .",day[n-1]);
    return 0;
}
