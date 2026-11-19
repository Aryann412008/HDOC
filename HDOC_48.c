//1
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100], temp[200];
    int len1, len2;

    scanf("%s", s1);
    scanf("%s", s2);

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (len1 != len2)
    {
        printf("Not rotation");
    }
    else
    {
        strcpy(temp, s1);
        strcat(temp, s1);

        if (strstr(temp, s2) != NULL)
            printf("Rotation");
        else
            printf("Not rotation");
    }

    return 0;
}

//2
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, start, end;

    fgets(str, sizeof(str), stdin);

    start = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            end = i - 1;

            while (start < end)
            {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }
    }

    printf("%s", str);

    return 0;
}
