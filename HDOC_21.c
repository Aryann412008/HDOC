//1
#include <stdio.h>

int main()
{
    int n, first, last, temp, digits = 0, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    int middle = (n % divisor) / 10;

    int result = last * divisor + middle * 10 + first;

    printf("%d", result);

    return 0;
}

//2
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n && n > 0)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not perfect number");
    }

    return 0;
}
