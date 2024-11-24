#include<stdio.h>

// function to calculate next fibonacci number
void fibonacci(int *a, int *b){
	*b= *a + *b;
	*a= *b - *a;
}


void main(){
	int n;
	int a=0, b=1;
	printf("Enter number of terms: ");
	scanf("%d", &n);
	if(n<=0){
		printf("Please enter a positive number.\n");
	}
	printf("Fibonacci Series:\n");
	for(int i=0;i<n;i++){
		printf("%d",a);
		fibonacci(&a,&b);
		printf("\n");
	}
}
