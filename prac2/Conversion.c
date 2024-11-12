#include<stdio.h>
#include<math.h>
#include<string.h>

int main(void) {
   /* Declare variables */
   int i,inum,tmp,numdigits;  // Loop variable, input number, temporary variable, and number of binary digits
   float fnum;  // Float representation of the integer
   char binnum[60]; // String to hold the binary representation


/* Intialise 4-byte integer */
   inum = 33554431;
/* Convert to 4-byte float */
   fnum = (float) inum;


/* Convert to binary number (as string)*/
   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);  // Store the least significant bit (LSB) in the binary string
     tmp = tmp/2;
     i++;
   }

/* Terminate the string */
   binnum[i] = '\0';

/* Reverse the String binnum*/
   int length, mid, j;
   char aux;  // Temporary variable for swapping
   length = strlen(binnum);  // Get the length of the binary string
   mid = length/2;  // Calculate the midpoint of the string
   for(i = 0; i < mid; i++) {
       j = length-i-1;  // Find the corresponding character from the end
       aux = binnum[i];
       binnum[i] = binnum[j];
       binnum[j] = aux;
    }

 /* Calculate the number of binary digits needed to represent the integer */
   numdigits = ceil(logf(fnum)/logf(2));  // Use logarithm to determine the number of bits
   printf("The number of digits is %d\n",numdigits);  // Output the number of digits
   printf("inum=%d,  fnum=%f, inum in binary=%s\n",inum,fnum,binnum); // Print the results
   return 0;
}
