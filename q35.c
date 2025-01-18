#include<stdio.h>
int main(){
	int m,n;
	printf("Enter a number ");
	scanf("%d",&m);
	printf("Enter Second number ");
	scanf("%d",&n);
	m=m+n;
	n=m-n;
	m=m-n;
	printf("swapped value are %d and %d",m,n);
}