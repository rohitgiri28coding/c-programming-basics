#include<stdio.h>
int main(){
	float l,b,h;
	printf("Enter length ");
	scanf("%f",&l);
	printf("Enter breadth ");
	scanf("%f",&b);
	if(l>=b){
	 printf("Enter height ");
	 scanf("%f",&h);	
  	 printf(" Volume= %f",l*b*h);}
	else
	printf("Length must be greater than equal to breadth");}
