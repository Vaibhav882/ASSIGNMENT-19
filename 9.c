#include <stdio.h>
#include <string.h>

int main() {
    char user[5][50] = {"vaibhav", "rahul", "neha", "amit", "sneha"};
    char name[50];
    int i, found = 0, n, fact = 1;

    printf("Enter username: ");
    gets(name);

    for (i = 0; i < 5; i++) {
        if (strcmp(name, user[i]) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Enter number for factorial: ");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
            fact *= i;
        printf("Factorial = %d\n", fact);
    } else
        printf("Access Denied! Invalid Username.\n");

    return 0;
}
