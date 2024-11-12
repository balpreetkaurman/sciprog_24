# C Programming Projects

This repository contains two C programs: one for converting an integer to its binary representation and another for calculating the harmonic series in both ascending and descending order.

## Integer to Binary Converter

This program converts an integer into its binary representation and calculates the number of binary digits required to represent it. It prints the original integer, its float representation, and the binary string.

### Compilation

Use the following command to compile the program:

```bash
gcc Conversion.c -o conversion -lm
```
This compiles the program and links it to the math library using -lm.
Run the program using:

```bash
./conversion
```
### Sample Output

For inum = 33554431, the output will be:
The number of digits is 25
inum=33554431,  fnum=33554432.000000, inum in binary=1111111111111111111111111

## Harmonic Series Calculation

### Description

This program calculates the harmonic series in two ways:

1. In ascending order from 1 to 1000.
2. In descending order from 1000 to 1.
It then prints the sum from both orders and calculates the difference between them.

### Usage

Run the program to observe how summation order affects floating-point precision.

### Compilation

```bash
gcc Sum.c -o sum
```
Run the program using:
```bash
.\sum
```
### Sample Output

The output will be:
Sum1 = 7.485470
Sum2 = 7.485470
Difference = 0.000000
