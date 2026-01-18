// File: Experiment4.c
#include <stdio.h>
int main(void) {
    double a, b, result;
    char op;
    printf("Enter first operand: ");
    if (scanf("%lf", &a) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Enter operator (+, -, *, /): ");
    if (scanf(" %c", &op) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Enter second operand: ");
    if (scanf("%lf", &b) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    switch (op) {
        case '+':
            result = a + b;
            printf("Result: %g\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %g\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %g\n", result);
            break;
        case '/':
            if (b == 0.0) {
                printf("Error: Division by zero.\n");
                return 1;
            }
            result = a / b;
            printf("Result: %g\n", result);
            break;
        default:
            printf("Error: Unsupported operator '%c'.\n", op);
            return 1;
    }
    return 0;
}