This document features two C programs:

Fibonacci Series Generation - Computes Fibonacci numbers up to a specified count entered by the user.
Arctanh Evaluation - Compares the results of calculating the inverse hyperbolic tangent (arctanh) using the Maclaurin series and the natural logarithm formula.

## Compilation

To compile the program, use the following command:

```bash
gcc hyperbolic.c -o hc -lm
gcc fibonacci.c -o f -lm
```
Here, -lm is used to link the math library for the tan() and logf() functions.

Run the program:
```bash
./hc
./f
```
## Output
**For Fibonacci.c** :
Enter number of terms: 10
Fibonacci Series:
0
1
1
2
3
5
8
13
21
34

**For hyperbolic.c** :
Please enter a Positive real number delta:
0.1
The Difference at x=-0.900000 is 0.0969918969
The Difference at x=-0.800000 is 0.0568076861
The Difference at x=-0.700000 is 0.0223142887
The Difference at x=-0.600000 is 0.0305089325
The Difference at x=-0.500000 is 0.0139075045
The Difference at x=-0.400000 is 0.0054658390
The Difference at x=-0.300000 is 0.0016787441
The Difference at x=-0.200000 is 0.0003249966
The Difference at x=-0.100000 is 0.0000200767
The Difference at x=-0.000000 is 0.1666666667
The Difference at x=0.100000 is 0.0033422691
The Difference at x=0.200000 is 0.0003249966
The Difference at x=0.300000 is 0.0016787441
The Difference at x=0.400000 is 0.0054658390
The Difference at x=0.500000 is 0.0139075045
The Difference at x=0.600000 is 0.0305089325
The Difference at x=0.700000 is 0.0223142887
The Difference at x=0.800000 is 0.0568076861
The Difference at x=0.900000 is 0.0969918969