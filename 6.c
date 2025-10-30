#include <stdio.h>
#include <string.h>

int main() {
    char str[5][50];
    int i, j, len, flag;

    printf("Enter 5 strings:\n");
    for (i = 0; i < 5; i++)
        gets(str[i]);

    printf("\nPalindrome strings are:\n");
    for (i = 0; i < 5; i++) {
        len = strlen(str[i]);
        flag = 1;
        for (j = 0; j < len / 2; j++) {
            if (str[i][j] != str[i][len - j - 1]) {
                flag = 0;
                break;
            }
        }
        if (flag)
            puts(str[i]);
    }

    return 0;
}
