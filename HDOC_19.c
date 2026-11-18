//1
#include <stdio.h>

int main()
{
    int a, b, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        i = a;
    else
        i = b;

    for (; ; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("%d", lcm);

    return 0;
}

//2
#include <stdio.h>

int main()
{
    int n, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    printf("%d", sum);

    return 0;
}
