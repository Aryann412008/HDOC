//1
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    scanf("%s", str);

    while(str[i] != '\0')
    {
        i++;
    }

    printf("%d", i);

    return 0;
}

//2
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    scanf("%s", str);

    while(str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
