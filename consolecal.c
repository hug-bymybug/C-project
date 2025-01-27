#include <stdio.h>

void add() {
    int num1,num2;
     printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("\n\n%d + %d = %d\n", num1, num2, num1 + num2);
}

void subtract() {
     int num1,num2;
     printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
}

void multiply() {
     int num1,num2;
     printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
}

void divide() {
     int num1,num2;
     printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num2 != 0) {
        printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    } else {
        printf("\nError! Division by zero is not allowed.\n");
    }
}

int main() {
    int num1, num2;
    char operator;

    while (1) {
        printf("\nWelcome to the Simple Calculator\n");
        printf("Select an operation:\n");
        printf(" + : Addition\n");
        printf(" - : Subtraction\n");
        printf(" * : Multiplication\n");
        printf(" / : Division\n");
        printf(" E : Exit\n");

        printf("Enter the operator: ");
        scanf(" %c", &operator);

        if (operator == 'E' || operator == 'e') {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }



        switch (operator) {
            case '+':
                add();
                break;
            case '-':
                subtract();
                break;
            case '*':
                multiply();
                break;
            case '/':
                divide();
                break;
            default:
                printf("\n\nInvalid operator! Please choose from +, -, *, /.\n\n");
        }
    }

    return 0;
}
