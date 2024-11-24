Magic Square Checker

Overview:

This program determines whether a given square matrix is a Magic Square. A Magic Square satisfies the following conditions:

The sums of all rows, columns, and both main diagonals are equal to a constant M.
The matrix has a positive integer size n.
The program reads a matrix from a file, checks if it is a Magic Square, and displays the result.

Files:

1. Code
mainstub.c: Implements file reading and Magic Square validation.
magic_square_stub.h: Header file for the isMagicSquare function.
2. Input
magic_square.txt: Example of a valid Magic Square.
not_magics_quare.txt: Example of a non-Magic Square.
How to Run

Compile the program:
gcc main_stub.c -o mainstub -lm
Execute:
./mainstub
Example Outputs

For a Magic Square:
Enter file name: magic_square.txt
No. lines: 3
M = 15
This is magic!
For a Non-Magic Square:
Enter file name: not_magic_square.txt
No. lines: 3
M = 15
Row 1 does not sum to 15 (row sum = 6).
This is not magic.
This program is a concise implementation of Magic Square validation with file-based input, providing a clear demonstration of matrix operations in C.