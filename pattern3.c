/*
Enter the number of rows: 5
1
2       4
3       5       7
6       8       10      12
9       11      13      15      17
*/
#include <stdio.h>
int main() {
    int a,o=1,e=0;
    printf("Enter the number of rows: ");
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        if (i%2!=0){
        for (int j=1;j<=i;j++) {
            printf("%d\t",o);
            o=o+2;
        }
        
    }
    else{
        for (int k=1;k<=i;k++) {
            e=e+2;
            printf("%d\t",e);
        }
    }
    printf("\n");
}
    return 0;
}
