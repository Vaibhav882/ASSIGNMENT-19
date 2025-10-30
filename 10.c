#include <stdio.h>
#include <string.h>

int main() {
    char user[50], pass[50];
    char uname[50] = "admin", pword[50] = "1234";
    int choice, loggedIn = 0;

    while (1) {
        printf("\n---- MENU ----\n");
        printf("1. Login\n2. Check Profile\n3. Logout\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                if (loggedIn) {
                    printf("Already logged in!\n");
                    break;
                }
                printf("Enter Username: ");
                gets(user);
                printf("Enter Password: ");
                gets(pass);
                if (strcmp(user, uname) == 0 && strcmp(pass, pword) == 0) {
                    loggedIn = 1;
                    printf("Login successful!\n");
                } else
                    printf("Invalid credentials!\n");
                break;

            case 2:
                if (loggedIn)
                    printf("Welcome, %s!\n", uname);
                else
                    printf("Please login first.\n");
                break;

            case 3:
                if (loggedIn) {
                    loggedIn = 0;
                    printf("Logged out successfully.\n");
                } else
                    printf("You are not logged in.\n");
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
