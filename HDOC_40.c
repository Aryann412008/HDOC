//1
#include <stdio.h>

int main()
{
    int r, c, i, j, k = 0;

    scanf("%d %d", &r, &c);

    int a[r][c];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(k = 0; k < r + c - 1; k++)
    {
        for(i = 0; i < r; i++)
        {
            j = k - i;

            if(j >= 0 && j < c)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}

//2
#include <stdio.h>

int main()
{
    int r1, c1, r2, c2, i, j, k;

    scanf("%d %d", &r1, &c1);

    int a[r1][c1];

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);

    int b[r2][c2];
    int mul[r1][c2];

    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if(c1 == r2)
    {
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                mul[i][j] = 0;

                for(k = 0; k < c1; k++)
                {
                    mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
                }
            }
        }

        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication not possible");
    }

    return 0;
}
