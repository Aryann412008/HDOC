#include <stdio.h>

int main()
{
    int n, x;
    int leftSum, rightSum;
    int found = -1;

    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        leftSum = x * (x + 1) / 2;
        rightSum = n * (n + 1) / 2 - (x - 1) * x / 2;

        if (leftSum == rightSum)
        {
            found = x;
            break;
        }
    }

    printf("%d", found);

    return 0;
}
