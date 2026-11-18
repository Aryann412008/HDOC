//1
#include <stdio.h>

int main()
{
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum = %d", sum);

    return 0;
}

//2
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum=%d, ", a + b);
    printf("Diff=%d, ", a - b);
    printf("Product=%d, ", a * b);
    printf("Quotient=%d", a / b);

    return 0;
}
