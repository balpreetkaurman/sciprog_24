Tan(x) Calculation and Area Under Curve

This C program computes the values of tan(x) at intervals of 5 degrees within the range of 0 to 60 degrees, stores these results in a global array, and calculates the area under the curve of tan(x) using the Trapezoidal Rule. The computed values and the area are displayed in the console.

Overview of Functions
toradian()
Converts angle measurements from degrees to radians.
tanvalues()
Calculates and stores the values of tan(x) for specified angles in a global array.
trapezoidalarea()
Computes the area under the tan(x) curve from 0 to 60 degrees using the Trapezoidal Rule.

## Usage
- Compile: 
```bash
gcc program.c -o program -lm
```
- Run: 
```bash
./program
```

## Result

Tan(x) values for every 5 degrees:
tan(0 degrees) = 0.000000
tan(5 degrees) = 0.087489
tan(10 degrees) = 0.176327
tan(15 degrees) = 0.267949
tan(20 degrees) = 0.363970
tan(25 degrees) = 0.466308
tan(30 degrees) = 0.577350
tan(35 degrees) = 0.700208
tan(40 degrees) = 0.839100
tan(45 degrees) = 1.000000
tan(50 degrees) = 1.191754
tan(55 degrees) = 1.428148
tan(60 degrees) = 1.732051

Area under the curve of tan(x): 0.695045