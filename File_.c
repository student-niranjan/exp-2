#include <stdio.h>

int main() {
    FILE *fptr;

    // Writing to a file
    fptr = fopen("sample.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(fptr, "Hello, file I/O in C!\n");
    fclose(fptr);

    // Reading from a file
    char buffer[100];
    fptr = fopen("sample.txt", "r");
    if (fptr == NULL) {
        printf("Error reading file.\n");
        return 1;
    }
    while (fgets(buffer, 100, fptr) != NULL)
        printf("%s", buffer);
    fclose(fptr);

    return 0;
}
