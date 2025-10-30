#include <stdio.h>
#include <string.h>

int main() {
    char city[10][50], temp[50];
    int i, j;

    printf("Enter 10 city names:\n");
    for (i = 0; i < 10; i++)
        gets(city[i]);

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (strcmp(city[i], city[j]) > 0) {
                strcpy(temp, city[i]);
                strcpy(city[i], city[j]);
                strcpy(city[j], temp);
            }
        }
    }

    printf("\nCities in sorted order:\n");
    for (i = 0; i < 10; i++)
        puts(city[i]);

    return 0;
}
