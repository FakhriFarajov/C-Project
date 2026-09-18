#include <stdio.h>
#include <string.h>
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

void cashierInterface() {
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

    cashierInterface();


    //Logic to check if the user is an admin or someone else
}

void validateInput() {

}

void reg() {
    char input[50];
    char name[50];
    char surname[50];
    char email[50];


    while (true) {
        fgets(input, sizeof(name), stdin);
        sscanf(input, "%s", &name);
        if (strchr(name, '\n') == NULL){
            printf("The name must be at most 50 symbols!");
            continue;
        }
        else if (name[0] == '\n') {
            printf("The name must be at least 1 symbol!");
            continue;
        }
        break;
    }

    while (true) {
        fgets(input, sizeof(surname), stdin);
        sscanf(input, "%s", &surname);
        if (strchr(surname, '\n') == NULL){
            printf("The surname must be at most 50 symbols!");
            continue;
        }
        else if (surname[0] == '\n') {
            printf("The surname must be at least 1 symbol!");
            continue;
        }
        break;
    }


    while (true) {
        fgets(input, sizeof(email), stdin);
        sscanf(input, "%s", &email);
        if (strchr(email, '\n') == NULL){
            printf("The email must be at most 50 symbols!");
            continue;
        }
        else if (email[0] == '\n') {
            printf("The email must be at least 1 symbol!");
            continue;
        }
        break;
    }

    printf("%s %s\n", name, surname);



    printf("===== Register =====\nEnter your email: ");

    printf("Enter your name: ");

    printf("Enter your surname: ");

    printf("Enter your password: ");
    //Logic to check if the user is an admin or someone else
}

void managerInterface(void) {
    int choice;
    int isRunning = 1;

    while (isRunning) {
        printf("\n===== Manager Menu =====\n1. Create cashier account\n2. Disable cashier account\n3. Remove cashier account\n4. Add currency\n5. Update currency information\n6. Set exchange rate\n7. Update currency reserve\n8. Set critical minimum reserve\n9. View currency status\n10. Review refill requests\n11. View all transactions\n12. View cashier reports and profits\n13. Manage monthly cashier bonuses\n14. View low-reserve warnings\n15. Logout\nSelect an option: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Create cashier account selected.\n");
                break;

            case 2:
                printf("Disable cashier account selected.\n");
                break;

            case 3:
                printf("Remove cashier account selected.\n");
                break;

            case 4:
                printf("Add currency selected.\n");
                break;

            case 5:
                printf("Update currency information selected.\n");
                break;

            case 6:
                printf("Set exchange rate selected.\n");
                break;

            case 7:
                printf("Update currency reserve selected.\n");
                break;

            case 8:
                printf("Set critical minimum reserve selected.\n");
                break;

            case 9:
                printf("View currency status selected.\n");
                break;

            case 10:
                printf("Review refill requests selected.\n");
                break;

            case 11:
                printf("View all transactions selected.\n");
                break;

            case 12:
                printf("View cashier reports and profits selected.\n");
                break;

            case 13:
                printf("Manage monthly cashier bonuses selected.\n");
                break;

            case 14:
                printf("View low-reserve warnings selected.\n");
                break;

            case 15:
                printf("Logout selected. Exiting manager menu.\n");
                isRunning = 0;
                break;

            default:
                printf("Invalid option. Please try again.\n");
        }
    }
}