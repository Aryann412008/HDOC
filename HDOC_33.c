//1
#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int low, high, mid, found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            found = mid;
            break;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found != -1)
    {
        printf("Found at index %d", found);
    }
    else
    {
        printf("-1");
    }

    return 0;
}

//2
#include <stdio.h>

int main()
{
    int a[100], n, i, num, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    pos = n;

    for (i = 0; i < n; i++)
    {
        if (a[i] > num)
        {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = num;
    n++;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
