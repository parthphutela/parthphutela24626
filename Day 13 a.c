#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(op) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;

        case '-':
            printf("Result = %d\n", num1 - num2);
            break;

        case '*':
            printf("Result = %d\n", num1 * num2);
            break;

        case '/':
            if (num2 == 0)
                printf("Error: Division by zero not allowed.\n");
            else
                printf("Result = %d\n", num1 / num2);
            break;

        case '%':
            if (num2 == 0)
                printf("Error: Modulus by zero not allowed.\n");
            else
                printf("Result = %d\n", num1 % num2);
            break;

        default:
            printf("Invalid Operator!\n");
    }

    return 0;
}
