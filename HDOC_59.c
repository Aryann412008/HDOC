#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int sum, maxSum;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    maxSum = -999999;

    for (i = 0; i <= n - k; i++)
    {
        sum = 0;

        for (j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }

        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}
