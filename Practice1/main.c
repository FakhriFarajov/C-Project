// # pragma region Task1
// #include <stdio.h>
// int main() {
//     printf("Hello, world! \n");
//     return 0;
// }
// # pragma endregion
//

// # pragma region Task2
// #include <stdio.h>
//
// int main() {
//     printf("Line 1\nLine 2\nLine 3\n");
//     return 0;
// }
// # pragma endregion

// # pragma region Task3_Exercise2
//
// # include <stdio.h>
//
// int main() {
//     printf("Fakhri Farajov\n");
//     return 0;
// }
//
// # pragma endregion

// # pragma region Task4
//
// # include <stdio.h>
//
// int main() {
//     printf("Column1\nColumn2\nColumn3\n");
//     printf("Data1\nData2\nData3\n");
//     return 0;
// }
//
// # pragma endregion

// # pragma region Task5
// # include <stdio.h>
// int main() {
//     printf("Fakhri\n");
//     printf("Farajov\n");
//     return 0;
// }
//
// # pragma endregion

// # pragma region Task6
//
// #include <stdio.h>
//
// int main() {
//     printf("Firstname : Fakhri\n");
//     printf("Lastname: Farajov\n");
//     return 0;
// }
//
// # pragma endregion

// #pragma region Task7
//
// # include <stdio.h>
//
// int main() {
//     printf("We have %d coins in the bank\n", 100);
//     printf("We have %f coins in the bank\n", 125.7);
//     printf("Year == %d /n", 2024);
//     printf("num1 = %d, num2 = %d sum = %d", 5,7,5+7);
//     printf("num1 = %d, num2 = %d sum = %d", 5,3,5-3);
//     printf("a = %d, b = %d, sum = a + b = %d\n", 3,5,3+5);
//     printf("a = %d, b = %d, sum = %d + %d = %d\n", 3,5,3,5,3+5);
//     printf("a = %d, b = %d, sum = a + b = %d + %d = %d\n", 3,5,3,5,3+5);
//     return 0;
// }
//
// # pragma endregion

// # pragma region Task8
//
// # include <stdio.h>
//
// int main() {
//     printf("Addition: %d + %d = %d\n", 5,2, 5+2);
//     printf("Substraction: %d - %d = %d\n", 5,2, 5-2);
//     printf("Multiplication: %d * %d = %d\n", 5,2,5*2);
//     printf("Division: %d / %d = %d\n", 5,2,5/2);
//
//     return 0;
// }
//
// # pragma endregion

// # pragma region Task9
//
// // Prompts:
// // 1. Variables ususally play a very important role in our program, it doesnt matter in which language we code on we always use variables.
// // A variable itself is a named place in the memory of our computer, we can also chnage the values of the variables. All the variablea have a name and a special data type the variable stores.
// // REal life analogy: You are at the party and you dont really rememebr all names of people you have met, so u take a notebook and write down the names of the people you see by depicting them
// // for example : person_in_black_shirt = "Mike";
// // 2. int a = 5;
// // As it is an integer variable it means that we can only assign the integer datatype values to that variable;
//
// // 3.
// // # include <stdio.h>
// //
// // int main(void) {
// //     float a = 99.9123121231233;
// //     double b = 99.9123121231233;
// //     printf("Float: %.10f\nDouble: %.10f\n", a, b);
// //     return 0;
// // }
// //
// // // The conclusion, i noticed that double is more precise
// // // The output
// // // /Users/fakhrifarajov/Desktop/Study/c/Practice1/cmake-build-debug/Practice1
// // // Float: 99.9123153687
// // // Double: 99.9123121231
// // //
// // // Process finished with exit code 0
//
//
// //4
// // #include <stdio.h>
// // int main() {
// //     char array1[] = "Fakhri";
// //
// //     printf("My name: %s\n", array1);
// //     return 0;
// // }
//
// //5.
// // #include <stdio.h>
// // #include <stdbool.h>
// // int main() {
// //     bool isTalTechStudent = true;
// //     printf("Is the user a TalTech user: %d\n", isTalTechStudent);
// //     //It shows 1 because 1 is true, and 0 is false, it is like a bynary system
// //     return 0;
// // }
//
// # pragma endregion

// # pragma region Task10
// #include <stdio.h>
// int main() {
//     int a = 31;
//     printf("%d\n",a);
//     a = 99;
//     printf("%d\n",a);
//     return 0;
// }
// # pragma endregion

# pragma region Task11
#include <stdio.h>
int main() {
    int distance = 135;
    printf("Distance: %d\n", distance);
    int newDistance = 429;
    distance = newDistance;
    printf("distance: %d\n", distance);
}

# pragma endregion