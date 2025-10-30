#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char words[10][50], w1[50], w2[50];
    int i, n, pos1 = -1, pos2 = -1, minDist = INT_MAX;

    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar();

    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++)
        gets(words[i]);

    printf("Enter word1: ");
    gets(w1);
    printf("Enter word2: ");
    gets(w2);

    for (i = 0; i < n; i++) {
        if (strcmp(words[i], w1) == 0)
            pos1 = i;
        if (strcmp(words[i], w2) == 0)
            pos2 = i;
        if (pos1 != -1 && pos2 != -1) {
            int dist = abs(pos1 - pos2);
            if (dist < minDist)
                minDist = dist;
        }
    }

    printf("Minimum distance: %d\n", minDist - 1);
    return 0;
}
