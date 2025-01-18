#include<stdio.h>
int main(){
	int m,n,a;
	printf("Enter a number ");
	scanf("%d",&m);
	printf("Enter Second number ");
	scanf("%d",&n);
	a=m;
	m=n;
	n=a;
	printf("swapped value are %d and %d",m,n);
}