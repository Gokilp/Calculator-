#include<stdio.h>

int main() {
    float num1, num2;
    char opt;

    printf("Choose an operator (+, -, *, /, %%) \n Enter: ");
    scanf("%c", &opt);


    printf("\t\t Calculator Application \t\n");

    if (opt == '+') {
        printf("Addition Operation");
    } else if (opt == '-') {
        printf("Subtraction Operation");
    } else if (opt == '*') {
        printf("Multiplication Operation");
    } else if (opt == '/') {
        printf("Division Operation");
    } else if (opt == '%') {
        printf("Modulus Operation");
    } else {
        printf("Invalid Operator");
    }

    printf("\nEnter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (opt) {
        case '+':
            printf("Addition of value A=%.2f and B=%.2f Result=%.2f", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Subtraction of value A=%.2f and B=%.2f Result=%.2f", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Multiplication of value A=%.2f and B=%.2f Result=%.2f", num1, num2, num1 * num2);
            break;
        case '/':
            printf("Division of value A=%.2f and B=%.2f Result=%.2f", num1, num2, num1 / num2);
            break;
        case '%':
            printf("Modulus of value A=%.2f and B=%.2f Result=%d", num1, num2, (int) num1 % (int) num2);
            break;
        default:
            printf("Error: Invalid operator\n");
    }
    printf("\n \t \t \t  Thanking you");
    return 0;
}



