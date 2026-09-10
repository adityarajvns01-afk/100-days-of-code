#include <stdio.h>
int main()
{
    int n, nn, nnn;

    printf("Enter the 3 sides : ");
    scanf("%d %d %d", &n, &nn ,&nnn);

    if (n == nn && nn == nnn)
    {
        printf("Equilateral Triangle");
    }
    else if (n == nn || nn == nnn || n == nn)
    {
        printf("Isosceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }

    return 0;
}