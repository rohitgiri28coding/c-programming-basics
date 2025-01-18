#include<stdio.h>
int main(){
	int a=0,b,c;
	printf("Enter number");
	scanf("%d",&b);
	c=b;
	while(b>0){
		a++;
		b=b/10;
	}
	printf("The number %d is of %d digits",c,a);
}