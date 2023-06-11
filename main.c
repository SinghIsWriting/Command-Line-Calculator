#include <stdio.h>      // sscanf()
#include <string.h>     // for strcmp()

// Passing argc and *argv[] to the main() function, argc is number of arguments and *argv[] is the list of given arguments
int main(int argc, char *argv[])
{
    printf("\n\n*********** Welcome to Command Line Calculator ***********\n\n");

    int num1, num2;
    // Converting string argument to the integers
    sscanf(argv[2], "%d", &num1);
    sscanf(argv[3], "%d", &num2);

    // Implementing entered mathematics operations on entered numbers
    if (strcmp(argv[1], "add") == 0){
        int sum;
        sum = num1 + num2;
        printf("Addition of %s and %s: \n", argv[2], argv[3]);
        printf("%s + %s = %d\n", argv[2], argv[3], sum);
    }
    else if (strcmp(argv[1], "subtract") == 0){
        int subtract;
        subtract = num1 - num2;
        printf("Subtraction of %s and %s: \n", argv[2], argv[3]);
        printf("%s - %s = %d\n", argv[2], argv[3], subtract);
    }
    else if (strcmp(argv[1], "multiply") == 0){
        int multiply;
        multiply = num1 * num2;
        printf("Multiplication of %s and %s: \n", argv[2], argv[3]);
        printf("%s x %s = %d\n", argv[2], argv[3], multiply);
    }
    else if (strcmp(argv[1], "divide") == 0){
        int division;
        division = num1 / num2;
        printf("Division of %s and %s: \n", argv[2], argv[3]);
        printf("%s / %s = %d\n", argv[2], argv[3], division);
    }
    else{
        printf("Invalid format !!!\n");
        printf("Usage: Excercise13.exe <operation> <num1> <num2>\n\n");
    }

    return 0;
}
