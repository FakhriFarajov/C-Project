#include <stdio.h>
#include <stdbool.h>
#include <ctype.h> // For isupper islower isalpha
#include <string.h>

void clientInterface();
void cashierInterface();
void managerInterface();
void login();
void reg();

char symbols[] = "!@#$%^&*()_";

typedef enum {
    ADMIN = 1,
    CASHIER = 2,
    CLIENT = 3,
} Role;

typedef struct {
    char name[51];
    char surname[51];
    char email[51];
    char password[17];
    Role role;
} User;

User Users[] = {};

int main(void) {

    int mainMenuChoice;
    do {
        printf("===== Welcome to X Change =====\n"
               "1. Login\n"
               "2. Register\n"
               "3. Quit\n"
               "Choice: ");

        scanf("%d", &mainMenuChoice);
        while (getchar() != '\n');

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

void clientInterface() {
    int choice;
    int isRunning = 1;
 
    do {
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
    } while (isRunning);
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

void managerInterface() {
    int choice;
    int isRunning = 1;

    do {
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
    } while (isRunning);
}

void login() {
    char input[52];
    char email[51];
    char passwordInput[18];
    char password[17];

    printf("===== Login =====\n");

    while (true) {
        printf("Enter your email: ");
        fgets(input, sizeof(input), stdin);

        if (strchr(input, '\n') == NULL) {
            printf("The email must be at most 50 symbols!\n");

            int c;
            while ((c = getchar()) != '\n' && c != EOF);

            continue;
        }

        input[strcspn(input, "\n")] = '\0';

        if (input[0] == '\0') {
            printf("The email must be at least 1 symbol!\n");
            continue;
        }

        if (strchr(input, ' ') != NULL || strchr(input, '\t') != NULL) {
            printf("The email must not contain spaces!\n");
            continue;
        }

        size_t at = strcspn(input, "@");

        if (input[at] == '\0') {
            printf("The email must contain @ - symbol!\n");
            continue;
        }

        size_t dot = strcspn(input, ".");

        if (input[dot] == '\0' || dot <= at + 1) {
            printf("Invalid format of the email\n");
            continue;
        }

        strcpy(email, input);
        break;
    }

    while (true) {
        bool oneUpper = false;
        bool oneLower = false;
        bool oneDigit = false;
        bool oneSpecialSymbol = false;
        bool oneAlpha = false;

        printf("Enter your password: ");
        fgets(passwordInput, sizeof(passwordInput), stdin);

        if (strchr(passwordInput, '\n') == NULL) {
            printf("The password must be at most 16 symbols!\n");

            int c;
            while ((c = getchar()) != '\n' && c != EOF);

            continue;
        }

        passwordInput[strcspn(passwordInput, "\n")] = '\0';

        if (strlen(passwordInput) < 8) {
            printf("The password must be at least 8 symbols!\n");
            continue;
        }

        if (strlen(passwordInput) > 16) {
            printf("The password must be at most 16 symbols!\n");
            continue;
        }

        if (strchr(passwordInput, ' ') != NULL ||
            strchr(passwordInput, '\t') != NULL) {
            printf("The password must not contain spaces!\n");
            continue;
        }

        for (int i = 0; passwordInput[i] != '\0'; i++) {
            if (isupper(passwordInput[i]))
                oneUpper = true;

            if (islower(passwordInput[i]))
                oneLower = true;

            if (isdigit(passwordInput[i]))
                oneDigit = true;

            if (isalpha(passwordInput[i]))
                oneAlpha = true;

            if (strchr(symbols, passwordInput[i]) != NULL)
                oneSpecialSymbol = true;
        }

        if (!oneUpper || !oneLower || !oneDigit ||
            !oneAlpha || !oneSpecialSymbol) {
            printf("Password must contain uppercase, lowercase, digit, and special symbol!\n");
            continue;
        }

        strcpy(password, passwordInput);
        break;
    }
    /* READ USERS FROM FILE */

    FILE *file = fopen("users.txt", "r");

    if (file == NULL) {
        printf("File could not be opened!\n");
        return;
    }

    int userCount = 0;
    int role;

    while (fscanf(file,
                  "%d;%50[^;];%50[^;];%50[^;];%16[^\n]",
                  &role,
                  Users[userCount].name,
                  Users[userCount].surname,
                  Users[userCount].email,
                  Users[userCount].password) == 5) {

        Users[userCount].role = (Role)role;
        userCount++;
    }

    fclose(file);


    /* FIND USER */

    for (int i = 0; i < userCount; i++) {

        if (strcmp(email, Users[i].email) == 0 &&
            strcmp(password, Users[i].password) == 0) {

            if (Users[i].role == ADMIN) {
                managerInterface(); // Pass the user data
            }
            else if (Users[i].role == CASHIER) {
                cashierInterface();
            }
            else if (Users[i].role == CLIENT) {
                clientInterface();
            }

            return;
        }
    }

    printf("Incorrect email or password!\n");
}

void reg()
{
    char input[52]; // Becasue when we read the user data it will be : text + \0 + \n
    char passwordInput[18]; // Becasue when we read the user data it will be : text + \0 + \n
    char name[51]; // Becasue 50 will be the data and 1 will be the \0
    char surname[51];
    char email[51];
    char password[17];
    Role role = CLIENT;
    bool emailTaken = false;

    printf("===== Register =====\n");

    while (true) {
        printf("Enter your name: ");
        fgets(input, sizeof(input), stdin); // Gets me the full line the user has types including \n

        // No '\n' means the input was too long
        if (strchr(input, '\n') == NULL) {
            printf("The name must be at most 50 symbols!\n");

            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }

        // Remove newline
        input[strcspn(input, "\n")] = '\0'; // Same as find or index in python returns the index of an element;

        // Empty input
        if (input[0] == '\0' ) {
            printf("The name must be at least 1 symbol!\n");
            continue;
        }

        // Spaces are not allowed
        if (strchr(input, ' ') != NULL || strchr(input, '\t') != NULL) {
            printf("The name must not contain spaces!\n");
            continue;
        }

        strcpy(name, input);
        break;
    }

    while (true) {
        printf("Enter your surname: ");
        fgets(input, sizeof(input), stdin); // Gets me the full line the user has types including \n

        // No '\n' means the input was too long
        if (strchr(input, '\n') == NULL) {
            printf("The surname must be at most 50 symbols!\n");

            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }

        // Remove newline
        input[strcspn(input, "\n")] = '\0'; // Same as find or index in python returns the index of an element;

        // Empty input
        if (input[0] == '\0') {
            printf("The surname must be at least 1 symbol!\n");
            continue;
        }

        // Spaces are not allowed
        if (strchr(input, ' ') != NULL || strchr(input, '\t') != NULL) {
            printf("The surname must not contain spaces!\n");
            continue;
        }

        strcpy(surname, input);
        break;
    }

    while (true) {
        printf("Enter your email: ");
        fgets(input, sizeof(input), stdin);

        // Check if input was too long
        if (strchr(input, '\n') == NULL) {
            printf("The email must be at most 50 symbols!\n");

            int c;
            while ((c = getchar()) != '\n' && c != EOF);

            continue;
        }

        // Remove newline
        input[strcspn(input, "\n")] = '\0';

        // Check if empty
        if (input[0] == '\0') {
            printf("The email must be at least 1 symbol!\n");
            continue;
        }

        // Check spaces
        if (strchr(input, ' ') != NULL || strchr(input, '\t') != NULL) {
            printf("The email must not contain spaces!\n");
            continue;
        }

        // Find @
        size_t at = strcspn(input, "@");

        if (input[at] == '\0') {
            printf("The email must contain @ - symbol!\n");
            continue;
        }

        // Find .
        size_t dot = strcspn(input, ".");

        if (input[dot] == '\0' || dot <= at + 1) {
            printf("Invalid format of the email\n");
            continue;
        }

        FILE *file = fopen("users.txt", "r");

        if (file == NULL) {
            printf("File could not be opened!\n");
            return;
        }

        int userCount = 0;
        int role;

        while (fscanf(file, //Maybe take only mails
                      "%d;%50[^;];%50[^;];%50[^;];%16[^\n]",
                      &role,
                      Users[userCount].name,
                      Users[userCount].surname,
                      Users[userCount].email,
                      Users[userCount].password) == 5) {

            Users[userCount].role = (Role)role;
            userCount++;
                      }

        fclose(file);

        for (int i = 0; i < userCount; i++) {
            if (strcmp(Users[i].email, input) == 0) {
                emailTaken = true;
            }
        }

        if (emailTaken == true) {
            printf("The email is already in use!\n");
            continue;
        }

        // Everything is valid
        strcpy(email, input);
        break;
    }

    printf("===== Password Requirements =====\n1. Must be at least 8 characters long!\n2. Must be at most 16 characters long!\n3. At least one upper\n4. At least one of the sybbols(!@#$%^&*()_)\n5. At least one digit\n");

    while (true) {
        bool oneUpper = false;
        bool oneLower = false;
        bool oneDigit = false;
        bool oneSpecialSymbol = false;
        bool oneAlpha = false;


        printf("Enter your password: ");
        fgets(passwordInput, sizeof(passwordInput), stdin);

        // Check if password is too long
        if (strchr(passwordInput, '\n') == NULL) {
            printf("The password must be at most 16 symbols!\n");

            int c;
            while ((c = getchar()) != '\n' && c != EOF);

            continue;
        }

        // Remove newline
        passwordInput[strcspn(passwordInput, "\n")] = '\0';

        // Check length
        if (strlen(passwordInput) < 8) {
            printf("The password must be at least 8 symbols!\n");
            continue;
        }

        if (strlen(passwordInput) > 16) {
            printf("The password must be at most 16 symbols!\n");
            continue;
        }

        // Check spaces
        if (strchr(passwordInput, ' ') != NULL ||
            strchr(passwordInput, '\t') != NULL) {
            printf("The password must not contain spaces!\n");
            continue;
            }

        // Check password requirements
        for (int i = 0; passwordInput[i] != '\0'; i++) {
            if (isupper(passwordInput[i]))
                oneUpper = true;

            if (islower(passwordInput[i]))
                oneLower = true;

            if (isdigit(passwordInput[i]))
                oneDigit = true;

            if (isalpha(passwordInput[i]))
                oneAlpha = true;

            if (strchr(symbols, passwordInput[i]) != NULL)
                oneSpecialSymbol = true;
        }

        if (!oneUpper || !oneLower || !oneDigit || !oneAlpha|| !oneSpecialSymbol) {
            printf("Password must contain uppercase, lowercase, digit, and special symbol!\n");
            continue;
        }
        strcpy(password, passwordInput);
        break;
    }

    printf("%d %d %d %d \n", strlen(name), strlen(surname), strlen(email), strlen(password));


    //Append to file
    FILE *file = fopen("users.txt", "a");
    fprintf(file, "%d;%s;%s;%s;%s\n", role, name, surname, email, password);
    fclose(file);
    //Logic to check if the user is an admin or someone else
}

