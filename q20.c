#include<stdio.h>
int main(){
	float cp,sp;
	printf("Enter Cost price ");
	scanf("%f",&cp);
	printf("Enter Selling Price ");
	scanf("%f",&sp);
	if(sp>cp)
	printf("Profit Percentage = %f ",((sp-cp)*100)/cp);
	else
	printf("LOSS INCURRED");}
	
