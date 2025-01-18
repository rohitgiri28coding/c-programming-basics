#include<stdio.h>
int main(){
	float a,b;
	printf("Enter a number A");
	scanf("%f",&a);
		printf("Enter a number B");
	scanf("%f",&b);
	if(a>b){
		printf("B is smaller\n");
	}
	else if (a==b){
		printf("Both are equal\n");
	}
	else{
		printf("A is smaller\n");
	}
}