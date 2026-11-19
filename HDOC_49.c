//1
#include <stdio.h>

int main()
{
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (i == 0 || name[i - 1] == ' ')
        {
            if (name[i] != ' ' && name[i] != '\n')
                printf("%c.", name[i]);
        }
    }

    return 0;
}

//2
#include <stdio.h>

int main()
{
    char name[100];
    int i, lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            lastSpace = i;
        }
    }

    for (i = 0; i < lastSpace; i++)
    {
        if (i == 0 || name[i - 1] == ' ')
        {
            if (name[i] != ' ')
                printf("%c.", name[i]);
        }
    }

    if (lastSpace != -1)
    {
        for (i = lastSpace + 1; name[i] != '\0' && name[i] != '\n'; i++)
        {
            printf("%c", name[i]);
        }
    }

    return 0;
}
