Matrix Multiplication in C

This project demonstrates a basic implementation of matrix multiplication in C. It computes the product of two matrices C, where Cn×q​ = An×p × Bp×q
​	
 . The code is organized into modular files for clarity and includes a Makefile for convenient compilation.

Project Structure:

main.c: Entry point of the program.
matmult.c: Contains the matrix multiplication logic.
Makefile: Facilitates project compilation and building.
How to Compile and Run

Using the Makefile:
Compile the program:
make
Run the compiled executable:
./matrix_multiply
Without the Makefile:
Compile manually using gcc:
gcc -o matrix_multiply main.c matmult.c
Run the compiled executable:
./matrix_multiply
Sample Output

Resulting Matrix C:

5.00  2.00  -1.00  -4.00  
8.00  2.00  -4.00  -10.00  
11.00  2.00  -7.00  -16.00  
14.00  2.00  -10.00  -22.00  
17.00  2.00  -13.00  -28.00 

This program serves as a simple example of matrix multiplication in C and demonstrates a modular coding approach.