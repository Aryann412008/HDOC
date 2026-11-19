//1
#include <stdio.h>

int main()
{
    int r, c, i, j;

    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], sum[r][c];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//2
#include <stdio.h>

int main()
{
    int r, c, i, j, flag = 1;

    scanf("%d %d", &r, &c);

    int a[r][c];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if(r == c)
    {
        for(i = 0; i < r; i++)
        {
            for(j = 0; j < c; j++)
            {
                if(a[i][j] != a[j][i])
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    else
    {
        flag = 0;
    }

    if(flag == 1)
        printf("True");
    else
        printf("False");

    return 0;
}
