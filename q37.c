#include<stdio.h>
int main(){
	int n,i,a,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	a=n;
	for(i=0;a!=0;i++){
	sum+=a%10;
	a=a/10;}
	n=n*10+sum;
	printf("%d",n);}
	