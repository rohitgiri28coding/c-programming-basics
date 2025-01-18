#include<stdio.h>
int main(){
	int a,b=0,c;
	printf("Enter number\t");
	scanf("%d",&a);
	c=a;
	while(a!= 0){
		b=b*10+a%10;
		a=a/10;
	}
	printf("%d is the reverse order of the %d",b,c);
}