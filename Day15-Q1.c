#include <stdio.h>
int main()
{
    int n, i;
    long long fact = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial = %d", fact);
    return 0;
}