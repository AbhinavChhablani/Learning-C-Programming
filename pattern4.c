/*
nter till which number you want the table: 5
Enter the Number Uptill Which table Is to be printed: 3
1 * 1 = 1       1 * 2 = 2       1 * 3 = 3
2 * 1 = 2       2 * 2 = 4       2 * 3 = 6
3 * 1 = 3       3 * 2 = 6       3 * 3 = 9
4 * 1 = 4       4 * 2 = 8       4 * 3 = 12
5 * 1 = 5       5 * 2 = 10      5 * 3 = 15
*/
#include <stdio.h>
int main() {
    int a,k;
    printf("Enter till which number you want the table: ");
    scanf("%d", &k);
    printf("Enter the Number Uptill Which table Is to be printed: ");
    scanf("%d", &a);
    for(int i=1; i<=k; i++) {
        for (int j=1; j<=a; j++) {
            printf("%d * %d = %d",i,j,i*j);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
