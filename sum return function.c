#include<stdio.h>
int sum (int a ,int b){
	return a+b;
}
int main(){
	int a,b,s;
	printf("Enter a number ");
	scanf("%d",&a);
	printf("Enter second number ");
	scanf("%d",&b);
	s=sum(a,b);
	printf("sum = %d",s);
}