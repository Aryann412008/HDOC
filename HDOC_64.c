#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int last[256];

    scanf("%s", s);

    for (int i = 0; i < 256; i++)
        last[i] = -1;

    int start = 0;
    int maxLength = 0;

    for (int i = 0; s[i] != '\0'; i++) {

        if (last[(unsigned char)s[i]] >= start)
            start = last[(unsigned char)s[i]] + 1;

        last[(unsigned char)s[i]] = i;

        int length = i - start + 1;

        if (length > maxLength)
            maxLength = length;
    }

    printf("%d", maxLength);

    return 0;
}
