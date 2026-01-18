#include <stdio.h>
int main() {
    float price, discount = 0;
    int category;
    // Input cost price
    printf("Enter the cost price: ");
    scanf("%f", &price);
    // Determine category based on price
    if (price >= 800)
        category = 1;
    else if (price >= 500)
        category = 2;
    else 
        category = 3;
    // Calculate discount using switch case
    switch (category) {
        case 1:  // price >= 800
            discount = price * 0.25;
            break;
        case 2:  // 500 <= price < 800
            discount = price * 0.20;
            break;
        case 3:  // price < 500
            discount = 0;
            break;
    }
    // Display results
    printf("\nCost Price: Rs. %.2f\n", price);
    printf("Discount: Rs. %.2f\n", discount);
    printf("Final Price: Rs. %.2f\n", price - discount);
    return 0;
}