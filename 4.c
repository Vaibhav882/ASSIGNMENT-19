#include <stdio.h>
#include <string.h>

int main() {
    char list[5][50], search[50];
    int i, found = 0;

    printf("Enter 5 strings:\n");
    for (i = 0; i < 5; i++)
        gets(list[i]);

    printf("Enter string to search: ");
    gets(search);

    for (i = 0; i < 5; i++) {
        if (strcmp(list[i], search) == 0) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("String found!\n");
    else
        printf("String not found!\n");

    return 0;
}
