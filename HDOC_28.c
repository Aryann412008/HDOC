//1
#include <stdio.h>

int main()
{
    int n, i, j, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        count = 0;

        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

//2
#include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
