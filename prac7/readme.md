Modular C Programs for Mathematical Computations

This repository contains two independent C programs that demonstrate modular coding practices with separate logic and functionalities.

Program 1: Estimating e

Description
The program estimates the value of the mathematical constant e using a series expansion. It calculates the sum of terms up to a specified polynomial order and compares the result with the true value from the exp() function in the C math library.

Files
main.c: Contains the main logic for estimating e and factorial calculation.

How to Run
Compile the program:
gcc -o estimate_e main.c -lm
Run the executable:
./estimate_e
Input
The user specifies the polynomial order to compute the series expansion.
Sample Output
Please enter the required polynomial order 5 e is estimated as 2.7166666667, with difference 6.150140e-04

Program 2: Dynamic Array Allocation and Operations

Description
This program demonstrates dynamic memory allocation and operations on arrays. It allocates an array, fills it with ones, prints the content, and then frees the allocated memory.

Files
fun.c: Implements array allocation, initialization, and cleanup functions.
How to Run
Compile the program:
gcc -o array_operations fun.c -lm
Run the executable:
./array_operations
Sample Output
1111111111111111111111111

Key Features

Dynamic Memory Management: Demonstrates malloc for memory allocation and free for cleanup.
Modular Design: Separate functions for logical operations like factorial calculation and array handling.
Error Handling: Handles invalid input cases gracefully.