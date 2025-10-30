#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[5][100];
    int i, j, count;

    printf("Enter 5 strings:\n");
    for (i = 0; i < 5; i++)
        gets(str[i]);

    for (i = 0; i < 5; i++) {
        count = 0;
        for (j = 0; str[i][j] != '\0'; j++) {
            char ch = tolower(str[i][j]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                count++;
        }
        printf("String %d: %d vowels\n", i + 1, count);
    }

    return 0;
}
