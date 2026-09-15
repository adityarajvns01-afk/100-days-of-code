#include <stdio.h>
int main()
{
    int a, b;
    char op;

    printf("Enter the numbers : ");
    scanf("%d %d", &a ,&b);

    printf("Enter the operator (+, -, *, /, %%) : ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+':
        printf("Result : %d", a + b);
        break;

        case '-':
        printf("Result = %d", a - b);
        break;

        case '*':
        printf("Result = %d", a * b);
        break;

        case '/':
        printf("Result = %d", a / b);
        break;

        case '%':
        printf("Result : %d", a % b);
        break;

        default:
        printf("Invalid Operator");
        break;
    }
    return 0;
}