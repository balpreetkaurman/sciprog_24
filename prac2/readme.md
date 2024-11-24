C Programming Projects

This repository contains two simple C programs:

Integer to Binary Converter: Converts an integer to its binary representation.
Harmonic Series Calculation: Calculates the harmonic series in ascending and descending orders to observe differences due to floating-point precision.
Integer to Binary Converter

Overview
This program converts an integer into its binary representation, calculates the number of binary digits required, and displays the results.

Compilation & Execution
gcc Conversion.c -o conversion -lm
./conversion
Example Output
For inum = 33554431:

The number of digits is 25
inum=33554431,  fnum=33554432.000000, inum in binary=1111111111111111111111111
Harmonic Series Calculation

Overview
This program computes the harmonic series in two ways:

Ascending Order: From 1 to 1000.
Descending Order: From 1000 to 1.
It compares the results to highlight differences caused by floating-point precision.
Compilation & Execution
gcc Sum.c -o sum
./sum
Example Output
Sum1 = 7.485470
Sum2 = 7.485470
Difference = 0.000000
These programs demonstrate basic C programming concepts, including binary operations and floating-point precision.