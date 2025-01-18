#include<stdio.h>
int main(){ 
	float a,b;
	printf("Enter a number ");
	scanf("%f",&a);
	int c= a;
	if(a>0 && c==a)	{	
		printf("Natural number");	}
	else {
		printf("Not a Natural number");	
 }
 /*or just write this
 a==(int)a?a>0?printf("Natural number"):printf("Not a Natural number"):printf("Not a Natural number");
 */
}