//1
#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements: ");

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array elements: ");

    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    for (i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }

    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}

//2
#include <stdio.h>

int main()
{
    int n, temp, digit, i;
    int count, max = 0, result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 0; i <= 9; i++)
    {
        temp = n;
        count = 0;

        while (temp > 0)
        {
            digit = temp % 10;

            if (digit == i)
            {
                count++;
            }

            temp = temp / 10;
        }

        if (count > max)
        {
            max = count;
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}
