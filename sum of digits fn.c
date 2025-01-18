#include<stdio.h>

int number_of_digits (int n){
//	int count=0;
//    for(;n!=0;count++){
//    	n=n/10;
//	}
//	return count;
if (n==0){
	return 0;
}
    n = n/n +number_of_digits(n/10);
    return n;
}



int sum_of_digits (int n){
	if(n == 0){
		return 0;
	}
    n = n%10  + sum_of_digits(n/10); 
	return n;
}



int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Number entered is : %d\nNumber of digits : %d\nSum of digits : %d",n,number_of_digits(n),sum_of_digits(n));
}