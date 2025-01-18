#include<stdio.h>
int main(){
	float l,b;
	printf("Enter length ");
	scanf("%f",&l);
	printf("Enter breadth ");
	scanf("%f",&b);
	if(l>=b){	
  	 printf(" Area = %f",l*b);}
	else
	printf("Length must be greater than equal to breadth");}
