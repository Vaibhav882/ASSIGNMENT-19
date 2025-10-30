#include <stdio.h>

int main() {
    char arr[5][100];
    int i;

    printf("Enter 5 strings:\n");
    for (i = 0; i < 5; i++)
        gets(arr[i]);

    printf("\nDisplaying strings:\n");
    for (i = 0; i < 5; i++)
        puts(arr[i]);

    return 0;
}
