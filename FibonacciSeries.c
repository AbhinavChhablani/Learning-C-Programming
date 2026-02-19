#include <stdio.h>
int main(void) {
    int n;
    printf("Enter number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    long long a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        printf("%lld", a);
        if (i < n - 1) printf(" ");
        long long next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
