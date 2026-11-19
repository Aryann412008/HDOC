#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceName[100];
    char destinationName[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", sourceName);

    printf("Enter destination filename: ");
    scanf("%s", destinationName);

    source = fopen(sourceName, "r");

    if (source == NULL) {
        printf("Error opening source file!");
        return 1;
    }

    destination = fopen(destinationName, "w");

    if (destination == NULL) {
        printf("Error creating destination file!");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s", destinationName);

    return 0;
}
