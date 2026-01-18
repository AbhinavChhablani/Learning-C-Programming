#include <stdio.h>
int main() {
    int calls;
    float bill = 200.0;
    printf("Enter the number of calls: ");
    scanf("%d", &calls);
    if (calls <= 100) {
        printf("Total Bill: Rs. %.2f\n", bill);
    }
    else if (calls <= 150) {
        bill += (calls - 100) * 0.60;
        printf("Total Bill: Rs. %.2f\n", bill);
    }
    else if (calls <= 200) {
        bill += (50 * 0.60) + ((calls - 150) * 0.50);
        printf("Total Bill: Rs. %.2f\n", bill);
    }
    else {
        bill += (50 * 0.60) + (50 * 0.50) + ((calls - 200) * 0.40);
        printf("Total Bill: Rs. %.2f\n", bill);
    }
    return 0;
}