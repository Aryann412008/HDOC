//1
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("Equilateral");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }

    return 0;
}

//2
#include <stdio.h>

int main()
{
    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        case 4:
            printf("Thursday");
            break;

        case 5:
            printf("Friday");
            break;

        case 6:
            printf("Saturday");
            break;

        case 7:
            printf("Sunday");
            break;

        default:
            printf("Invalid input");
    }

    return 0;
}
