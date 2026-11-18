//1
#include <stdio.h>

int main()
{
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        printf("%lld", fact);
    }

    return 0;
}

//2
#include <stdio.h>

int main()
{
    int n, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    printf("%d", rev);

    return 0;
}
