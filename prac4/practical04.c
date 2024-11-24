#include<stdio.h>
#include<math.h>

#define n 13
double tanarray[n]; // defining array globally

// function to convert degree to radian
double toradian(double degree){
   return degree*(M_PI / 180.0);
}

// function to calculate values of tan
void tanvalues(){
   for(int i=0;i<n;i++){
      double degree= i* 5.0;
      double radian= toradian(degree);
      tanarray[i]=tan(radian);
   }
}

// function to calculate area under the curve using trapezoidal rule
double trapezoidalarea(){
   double a=0.0;
   double h= M_PI/180.0 * 5;
   for(int i=0;i<n-1;i++){
      a+= (tanarray[i] + tanarray[i+1])* (h/2.0);
   }
   return a;
}

void main(){
   // calling function to calculate values for each angle
   tanvalues();
   // printing the values
   printf("Tan(x) values for every 5 degrees: \n");
   for(int i=0;i<n;i++){
      printf("tan(%d degrees)= %f\n",i*5,tanarray[i]);
   }
   // calculating area under curve
   double a= trapezoidalarea();
   printf("\n Area under the curve of tan(x): %f\n",a);
}
