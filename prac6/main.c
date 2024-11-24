#include<stdio.h>
#include<math.h>
#include "mathmult.h"
int main(){
	int n=5,p=3,q=4;
	double A[5][3];
	double B[3][4];
	double C[5][4]={0};

	//for A
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
		A[i][j]=i+j;
		}
	}
	//for B
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			B[i][j]=i-j;
		}
	}
	mathmult(A,B,C,n,p,q);
	printf("Matrix A:\n");
        for (int i = 0; i < n; i++) {
        	for (int j = 0; j < p; j++) {
        		printf("%6.2f ", A[i][j]);
        	}
        	printf("\n");
	}

	printf("\nMatrix B:\n");
	for (int i = 0; i < p; i++) {
        	for (int j = 0; j < q; j++) {
        		printf("%6.2f ", B[i][j]);
        	}
        	printf("\n");
    	}

    	printf("\nMatrix C (Result of A x B):\n");
    	for (int i = 0; i < n; i++) {
        	for (int j = 0; j < q; j++) {
            		printf("%6.2f ", C[i][j]);
        	}
        	printf("\n");
    	}

	return 0;
}