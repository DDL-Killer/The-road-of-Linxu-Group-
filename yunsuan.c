#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;


    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else if (operator == '%') {
        if ((int)num2 != 0) {
            result = (int)num1 % (int)num2;
            printf("Result: %.0lf\n", result);
        } else {
            printf("Warning！\n");
        }
    } else {
        printf("Wrong！\n");
    }

    return 0;
}
