//1
#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, len = 0;

    scanf("%s", str);

    while(str[len] != '\0')
    {
        len++;
    }

    for(i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("%s", str);

    return 0;
}

//2
#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0, flag = 1;

    scanf("%s", str);

    while(str[len] != '\0')
    {
        len++;
    }

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
