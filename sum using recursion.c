#include<stdio.h>
int sum(int n){
	if(n==1){
		return 1;
	}
	int sum_nminus1 = sum(n-1);
	int sum_n = sum_nminus1 + n;
	return sum_n;
}
int main(){
	printf("Enter a number ");
	int n;
	scanf("%d",&n);
	printf("sum is : %d",sum(n));
}