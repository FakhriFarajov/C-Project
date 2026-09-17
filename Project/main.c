#include <stdio.h>
#include <stdbool.h>

void showClientMenu() {
    int choice;
    int isRunning = 1;

    while (isRunning) {
        printf("\n===== Client Menu =====\n1. View available currencies\n2. Current exchange rates\n3. Request a exchange\n4. View my transactions\n5. View my receipts\n6. Logout\nSelect an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("View available currencies selected.\n");
                break;
            case 2:
                printf("Current exchange rates selected.\n");
                break;
            case 3:
                printf("Request an exchange selected.\n");
                break;
            case 4:
                printf("View my transactions selected.\n");
                break;
            case 5:
                printf("View my receipts selected.\n");
                break;
            case 6:
                printf("Logout selected. Exiting client menu.\n");
                isRunning = 0;
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }
}

void cahsierInterface() {
    int choice;

    do {
        printf("\n===== Cashier =====\n"
               "Select the operation:\n"
               "1. View currency reserves\n"
               "2. View current exchange rates\n"
               "3. Exchange requests\n"
               "4. Personal Data\n"
               "5. Request to refill the currency reserve\n"
               "6. Transactions\n"
               "7. Logout\n"
               "Choice: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("View currency reserves\n");
                break;

            case 2:
                printf("View current exchange rates\n");
                break;

            case 3:
                printf("Exchange requests\n");
                break;

            case 4:
                printf("Personal Data\n");
                break;

            case 5:
                printf("Request to refill currency reserve\n");
                break;

            case 6:
                printf("Transactions\n");
                break;

            case 7:
                printf("Logging out...\n");
                break;

            default:
                printf("No such choice\n");
        }

    } while (choice != 7);
}

void login() {
    char email[50];
    char password[50];


    printf("===== Login =====\nEnter your email: ");
    scanf("%s", &email);

    printf("Enter your password: ");
    scanf("%s", &password);

    cahsierInterface();


    //Logic to check if the user is an admin or someone else
}

void reg() {
    char name[50];
    char surname[50];
    char email[50];
    char password[50];


    printf("===== Register =====\nEnter your email: ");
    scanf("%s", &email);

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter your surname: ");
    scanf("%s", &surname);

    printf("Enter your password: ");
    scanf("%s", &password);


    //Logic to check if the user is an admin or someone else
}



int main(void) {

    int mainMenuChoice;
    do {
        printf("===== Welcome to X Change =====\n1. Login\n2. Register\n3. Quit\nChoice: ");
        scanf("%d", &mainMenuChoice);

        switch (mainMenuChoice) {
            case 1:
                login();
                break;
            case 2:
                reg();
                break;
            case 3:
                printf("===== Hope to see you later =====\n");
                break;
            default:
                printf("No such choice\n");
        }
    } while (mainMenuChoice != 3);
    return 0;
}
