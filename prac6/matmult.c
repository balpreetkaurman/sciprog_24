#include<stdio.h>
#include<math.h>

void mathmult(double A[5][3], double B[3][4], double C[5][4], int n, int p, int q){
	for(int i=0;i<n;i++){
		for(int j=0;j<q;j++){
			C[i][j]=0;
			for(int k=0;k<p;k++){
				C[i][j]+= A[i][k] * B[k][j];
			}

		}

	}
}