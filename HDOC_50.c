//1
#include <stdio.h>

int main()
{
    char date[20];

    scanf("%s", date);

    date[3] = '\0';

    printf("%s-Apr-%s", date, date + 6);

    return 0;
}

//2
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, k, len;

    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            if (i != len - 1 || j != len - 1)
                printf(",");
        }
    }

    return 0;
}
