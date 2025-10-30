#include <stdio.h>
#include <string.h>

int main() {
    char email[5][100];
    int i, valid;

    printf("Enter 5 email addresses:\n");
    for (i = 0; i < 5; i++)
        gets(email[i]);

    printf("\nInvalid emails:\n");
    for (i = 0; i < 5; i++) {
        valid = 0;
        if (strchr(email[i], '@'))
            valid = 1;

        if (!valid)
            puts(email[i]);
    }

    return 0;
}
