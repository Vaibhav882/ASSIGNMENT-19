#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int validIP(char *ip) {
    int num, dots = 0;
    char *ptr;

    ptr = strtok(ip, ".");
    if (ptr == NULL)
        return 0;

    while (ptr) {
        if (!isdigit(*ptr))
            return 0;
        num = atoi(ptr);
        if (num >= 0 && num <= 255) {
            ptr = strtok(NULL, ".");
            if (ptr != NULL)
                dots++;
        } else
            return 0;
    }
    return dots == 3 ? 1 : 0;
}

int main() {
    char ip[5][30];
    int i;
    printf("Enter 5 IP addresses:\n");
    for (i = 0; i < 5; i++)
        gets(ip[i]);

    printf("\nInvalid IP addresses:\n");
    for (i = 0; i < 5; i++) {
        char temp[30];
        strcpy(temp, ip[i]);
        if (!validIP(temp))
            puts(ip[i]);
    }

    return 0;
}
