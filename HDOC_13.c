//1
#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter two numbers and an operator: ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op)
    {
        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("%d", a / b);
            else
                printf("Division by zero is not possible");
            break;

        case '%':
            if (b != 0)
                printf("%d", a % b);
            else
                printf("Modulus by zero is not possible");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}

//2
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
