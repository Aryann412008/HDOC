#include <stdio.h>

int main()
{
    int nums[100], n, i;
    int total = 0, leftSum = 0;
    int pivot = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        total = total + nums[i];
    }

    for (i = 0; i < n; i++)
    {
        if (leftSum == total - leftSum - nums[i])
        {
            pivot = i;
            break;
        }

        leftSum = leftSum + nums[i];
    }

    printf("%d", pivot);

    return 0;
}
