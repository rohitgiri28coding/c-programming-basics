#include<stdio.h>
#include<math.h>
int main (){
	float D,a,b,c;
	printf("Enter a , b , c ,i.e. the coefficint of the quadratic equations");
	scanf("%f%f%f",&a,&b,&c);
	D= pow(b,2)-4*a*c;
	printf("Discriminant=%f",D);
}