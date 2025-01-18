#include<stdio.h>
#include<math.h>
int main(){
	float l,b;
	printf("Enter x ");
	scanf("%f",&l);
	printf("Enter n ");
	scanf("%f",&b);
	if(l==0&&b==0){	
  	 printf("1");}
	else
     printf(" x^n = %f",pow(l,b));}
