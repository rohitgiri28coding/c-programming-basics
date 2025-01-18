#include<stdio.h>
int main() {
	float a,b;//a=length and b=breath
	printf("Enter length ");
	/*extra line will give a better coding
	*/
	scanf("%f",&a);
	printf("\nEnter breadth");
	scanf("%f",&b);
	printf("\nPerimeter=%f",2*(a+b));
}