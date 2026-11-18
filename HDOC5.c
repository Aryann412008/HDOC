//1
#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, si, ci;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;
    ci = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest=%.2f, Compound Interest=%.2f", si, ci);

    return 0;
}

//2
#include <stdio.h>

int main()
{
    int seconds, hours, minutes, remaining;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    remaining = seconds % 3600;

    minutes = remaining / 60;
    remaining = remaining % 60;

    printf("%d:%d:%d", hours, minutes, remaining);

    return 0;
}
