//1
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int count[256] = {0};
    int i, flag = 1;

    scanf("%s", s1);
    scanf("%s", s2);

    if (strlen(s1) != strlen(s2))
    {
        flag = 0;
    }
    else
    {
        for (i = 0; s1[i] != '\0'; i++)
        {
            count[(unsigned char)s1[i]]++;
            count[(unsigned char)s2[i]]--;
        }

        for (i = 0; i < 256; i++)
        {
            if (count[i] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}

//2
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], word[100], longest[100];
    int i, j, max = 0, len;

    fgets(str, sizeof(str), stdin);

    i = 0;

    while (str[i] != '\0')
    {
        j = 0;

        while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
            i++;
        }

        word[j] = '\0';
        len = strlen(word);

        if (len > max)
        {
            max = len;
            strcpy(longest, word);
        }

        if (str[i] == ' ')
            i++;
    }

    printf("%s", longest);

    return 0;
}
