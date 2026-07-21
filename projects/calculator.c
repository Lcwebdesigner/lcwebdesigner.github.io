#include <stdio.h>

int main()
{
    char operator;
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(operator)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else
            {
                printf("Cannot divide by zero");
                return 1;
            }
            break;

        default:
            printf("Invalid operator");
            return 1;
    }

    printf("Result = %.2f", result);

    return 0;
}
