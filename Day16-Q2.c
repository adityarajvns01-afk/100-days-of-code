#include <stdio.h>
int main()
{
    int n, original, digit, reverse = 0;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if (original == reverse)
    {
        printf("This is a Palindrome Number");
    }
    else
    {
        printf("This is not a Palindrome Number");
    }
    return 0;
}