# pragma region task1
// #include <stdio.h>
//
// int main() {
//     int age;
//
//     printf("Enter the age: ");
//     scanf("%d", &age);
//
//     if (age >= 18) {
//         printf("The person can vote.");
//     }
//     return 0;
// }
# pragma endregion

# pragma region task2
// #include <stdio.h>
//
// int main() {
//     int age;
//
//     printf("Enter the age: ");
//     scanf("%d", &age);
//
//     if (age >= 18) {
//         printf("The person can vote.");
//     }
//     else {
//         printf("The person cannot vote.");
//     }
//     return 0;
// }
# pragma endregion

# pragma region task3
// #include <stdio.h>
//
// int main() {
//     int number;
//
//     printf("Enter the value: ");
//     scanf("%d", &number);
//
//     if (number > 0) {
//         printf("The number is positive.\n");
//     }
//     else if (number == 0) {
//         printf("Th enumber is 0");
//     }
//     else {
//         printf("The number is negative.\n");
//     }
//     return 0;
// }
# pragma endregion

# pragma region task4
// #include <stdio.h>
//
// int main() {
//     int number;
//
//     printf("Enter the number: ");
//     scanf("%d", &number);
//
//     if (number % 2==0 ) {
//         printf("the number is even.\n");
//     }
//     else {
//         printf("The number is odd.\n");
//     }
//     return 0;
// }

# pragma endregion

# pragma region task5
// #include <stdio.h>
// void checkOddNumber(int number) {
//     if (number%2 == 0) printf("The number is even.\n");
//     else printf("The number is odd.\n");
// }
//
//
// int main() {
//     int number;
//
//     printf("Enter the number: ");
//     scanf("%d", &number);
//
//     checkOddNumber(number);
//     return 0;
// }
# pragma endregion

# pragma region task6
// #include <stdio.h>
//
// int main() {
//     int number;
//
//     printf("Enter the number: ");
//     scanf("%d", &number);
//
//     switch (number) {
//         case 1:
//             printf("January");
//             break;
//         case 2:
//             printf("February");
//             break;
//         case 3:
//             printf("March");
//             break;
//         case 4:
//             printf("April");
//             break;
//         case 5:
//             printf("May");
//             break;
//         case 6:
//             printf("June");
//             break;
//         case 7:
//             printf("July");
//             break;
//         case 8:
//             printf("August");
//             break;
//         case 9:
//             printf("September");
//             break;
//         case 10:
//             printf("October");
//             break;
//         case 11:
//             printf("November");
//             break;
//         case 12:
//             printf("December");
//             break;
//         default:
//             printf("Invalid Number");
//     }
//
//
//     return 0;
// }
# pragma endregion

# pragma region task7
// #include <stdio.h>
//
// int main() {
//     int number;
//
//     printf("Enter the number: ");
//     scanf("%d", &number);
//
//     switch (number) {
//         case 1:
//             printf("Odd Number");
//             break;
//         case 2:
//             printf("Even Number");
//             break;
//         case 3:
//             printf("Odd Number");
//             break;
//         case 4:
//             printf("Even Number");
//             break;
//         case 5:
//             printf("Odd Number");
//             break;
//         case 6:
//             printf("Even Number");
//             break;
//         case 7:
//             printf("Odd Number");
//             break;
//         case 8:
//             printf("Even Number");
//             break;
//         case 9:
//             printf("Odd Number");
//             break;
//         case 10:
//             printf("Even Number");
//             break;
//         default:
//             printf("Invalid number");
//     }
//
//
//     return 0;
// }
# pragma endregion

# pragma region task8
// #include <stdio.h>
//
// int main() {
//     int number = 5;
//
//     while (number > 0) {
//         printf("%d", number--);
//     }
//
//
//     return 0;
// }
# pragma endregion

# pragma region task9
// #include <stdio.h>
//
// int main() {
//     int number;
//
//     int total = 1;
//     int i = 1;
//
//     printf("Enter the number: ");
//     scanf("%d", &number);
//
//     while (i <= number) {
//         total = total * i;
//         ++i;
//     }
//     printf("%d", total);
//
//     return 0;
// }
# pragma endregion

# pragma region task10
// #include <stdio.h>
// int main() {
//     for (int i = 5; i > 0; i = i - 1) {
//         printf("%d\n", i);
//     }
// }
# pragma endregion

# pragma region task11
// #include <stdio.h>
// int main() {
//     int number ;
//     scanf("%d", &number);
//
//     // the initial value of total is 1
//     int total = 1;
//     // run for loop from i = 1 to n
//     for (int i = 1; i <= number; i++) {
//         total = total * i;
//     }
//     printf("%d", total);
//     return 0;
// }
# pragma endregion

# pragma region task12
// #include <stdio.h>
// int main() {
//     // take input value for n
//     int n;
//     scanf("%d", &n);
//     // iterate from i = 1 to n (n should be
//
//     for (int i = 1; i <= n; i++) {
//         i % 2 == 1 ? printf("Odd\n") : printf("Even\n");
//     }
//     return 0;
// }
# pragma endregion

# pragma region task13
#include <stdio.h>
// int main() {
//     // initial value of total is 0
//     int total = 0;
//     int num;
//     while (1) {
//         scanf(" %d", &num);
//         total += num;
//         if (num <= 0) break;
//     }
//     printf("%d", total);
//     return 0;
// }
# pragma endregion

# pragma region task14
// #include <stdio.h>
// int main() {
//     // get integer input
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; ++i) {
//         // (i % 2 == 1) ? printf("%d", i) : printf("%d", i);
//
//         if (i%2==1) {
//             printf("%d\n", i);
//         }
//         else {
//             continue;
//         }
//     }
//     return 0;
// }
# pragma endregion

# pragma region task15
// #include <stdio.h>
// int main() {
//     // get integer input from the user
//     int n;
//     scanf("%d", &n);
//     // create multiplication table from 6 to
//
//     for (int i = 6; i <= 9; ++i) {
//         printf("%d times %d is %d\n", n,i,n*i);
//     }
//
//     return 0;
// }
# pragma endregion

# pragma region task16

// #include <stdio.h>
// int main() {
//     int number;
//     while (1) {
//         scanf("%d", &number);
//
//         if (number >= 1 && number <= 100) {
//             printf("%d\n", number);
//             continue;
//         }
//         break;
//     }
//     return 0;
// }

#pragma endregion

# pragma region task17

// #include <stdio.h>
// int main() {
//     // get input value for number
//     int number;
//     scanf("%d", &number);
//     // assign the number to another variable originalNumber
//     int originalNumber = number;
//     // sum variable to store the sum of cubes
//     int sum = 0;
//     // variable to access each digit of the number
//     int remainder;
//     // loop to find the cubes of each digit
//     while (originalNumber != 0) {
//         // use originalNumber % 10 to get the last digit
//         remainder = originalNumber % 10;
//         // add the cube of the last digit to sum
//         sum += remainder*remainder*remainder;
//         // use originalNumber / 10 to change the value of originalNumber
//         originalNumber = originalNumber / 10;
//         }
//     // check if sum is equal to number
//     if (sum == number) {
//         printf("Armstrong Number");
//     }
//     else {
//         printf("Not an Armstrong Number");
//     }
//     return 0;
// }

#pragma endregion

# pragma region task18

#include <stdio.h>
int main() {
    // get input value for operator
    char op;
    scanf("%c", &op);
    // get input value of first and second
    double first, second;
    scanf("%lf %lf", &first, &second);
    switch (op) {
        case '+':
            printf("%lf\n", first + second);
            break;
        case '-':
            printf("%lf\n", first - second);
            break;
        case '*':
            printf("%lf\n", first * second);
            break;
        case '/':
            printf("%lf\n", first / second);
            break;
        default:
            printf("Error!");
    }
    return 0;
}

#pragma endregion