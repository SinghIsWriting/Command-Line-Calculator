# Command Line Calculator

This repository contains a C program that implements a command line calculator. The program allows you to perform various mathematical operations by providing the operation and two numbers as command line inputs.

## Prerequisites

Make sure you have a C compiler installed on your system. For example, you can use GCC (GNU Compiler Collection) on Linux or MinGW on Windows.

## Instructions

1. Clone this repository to your local machine using the following command:
git clone https://github.com/SinghIsWriting/Command-Line-Calculator.git

2. Navigate to the cloned repository directory.
3. Compile the C program using your preferred C compiler. For example, with GCC:
gcc main.c -o calculator

4. Run the compiled program by providing the operation and two numbers as command line arguments. For example:
./calculator add 5 3

The above command will perform the addition operation on the numbers 5 and 3.

Supported operations: add, subtract, multiply, divide.

5. The program will display the result of the specified operation.

6. You can perform other operations by running the program with different command line inputs.

## Program Details

The `main.c` file contains a program that implements a command line calculator.

The program takes three command line arguments: the operation (add, subtract, multiply, or divide) and two numbers on which the operation is to be performed.

The program uses conditional statements to determine the operation to be performed and performs the corresponding mathematical operation on the given numbers.

The result is displayed on the console.

Feel free to explore the code in the repository and modify it according to your needs. You can add more operations or enhance the functionality as desired.

Happy calculating!
