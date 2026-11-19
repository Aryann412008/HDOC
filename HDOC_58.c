#include <stdio.h>

int main()
{
    int nums[100], answer[100];
    int n, i, product = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        product = 1;

        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if (i < n - 1)
            printf(",");
    }

    return 0;
}
