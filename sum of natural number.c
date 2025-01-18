#include<stdio.h>
int main(){
	int n,sum=0,i=1;
	printf("Enter no of term to calculate sum of the natural number ");
	scanf("%d",&n);
	if (n>0){
	while(i<=n){
		sum=sum+i;
		i++;
	}
	printf("sum=%d",sum);}
	else
	printf("invalid input");}