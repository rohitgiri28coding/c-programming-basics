#include<stdio.h>
int main(){
	int n,x=0,y;
	printf("enter a number");
	scanf("%d",&n);
	y=n;
	while(n!=0){
		x=10*x+n%10;
		n=n/10;
	}
	if(x==y){
		printf("The given no %d is palindrome",x);
	}
	else
	printf("Not a palindrome");
}