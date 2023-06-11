/*

You have to create a command line utility to add/subtract/multiply/divide two numbers
First command line argument  of your C program must be the operation.
The next arguments must being two numbers, Example:
>> command.exe add 23 45
>> 68

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("\n\n*********** Welcome to Command Line Calculator ***********\n\n");
    // printf("Number of given arguments %d\n", argc);
    int num1, num2;
    // convert string to integer
    // int sum = atoi(str);
    // int sum = (int)strtol(str, NULL, 10);
    sscanf(argv[2], "%d", &num1);
    sscanf(argv[3], "%d", &num2);
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
    // printf("%d\n", sizeof(argv[1]));
    // printf("argv[1]: %s\n", argv[1]);

    return 0;
}
