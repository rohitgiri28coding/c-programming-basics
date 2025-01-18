#include<stdio.h>
int factorial(long int n){
	if(n==0){
		return 1;
	}
	long int factnm1 = factorial(n-1);
	long int factn = factnm1 * n ;
	return factn;
}
int main(){
	long int  n;
	printf("Enter a number to calculate factorial ");
	scanf("%ld",&n);
	printf("Factorial of %ld is : %ld",n,factorial(n));
}