#include<stdio.h>
#include<math.h>
int main(){
	int n,i,a,b;
	printf("Enter a number");
	scanf("%d",&n);
	a=n/10;
	b=n%10;
	n=n/10;
	for(i=0;a!=0;i++){
		a=a/10;
	}
	b=b*(pow(10,i));
	n=n+b;
	printf("Digit toward right %d",n);
}