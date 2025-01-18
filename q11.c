#include<stdio.h>
int main(){
	float p,r,t;
	printf("Enter principal amount ");
	scanf("%f",&p);
	printf("Enter rate of interest(per annum) ");
	scanf("%f",&r);
	printf("Enter time(in years) ");
	scanf("%f",&t);
	if(t>0){	
  	 printf(" Simple interest = %f",p*r*t/100);}
	else
	printf("Time must be greater than equal to zero");}
