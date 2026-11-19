//1
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, j = 0;

    scanf("%s", str);

    while(str[i] != '\0')
    {
        if(str[i] != 'a' && str[i] != 'e' &&
           str[i] != 'i' && str[i] != 'o' &&
           str[i] != 'u' && str[i] != 'A' &&
           str[i] != 'E' && str[i] != 'I' &&
           str[i] != 'O' && str[i] != 'U')
        {
            str[j] = str[i];
            j++;
        }

        i++;
    }

    str[j] = '\0';

    printf("%s", str);

    return 0;
}

//2
#include <stdio.h>

int main()
{
    char str[100];
    int i, j, flag = 0;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                printf("%c", str[i]);
                flag = 1;
                break;
            }
        }

        if(flag == 1)
        {
            break;
        }
    }

    if(flag == 0)
    {
        printf("No repeating character");
    }

    return 0;
}
