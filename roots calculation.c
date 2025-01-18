#include<stdio.h>
#include<math.h>
int main() {
	float a,b,c,A,B,D;
	/* a,b,c are coeffecients of the quatratic equation a*x*x + b*x + c */
	printf("Enter a,b,c");
	scanf("%f,%f,%f",&a,&b,&c);
	D = pow(b,2) - 4 * a * c;
	A = (-b + sqrt(D))/(2 * a);
	B = (-b - sqrt(D))/(2 * a);
	if (D > 0) {
		printf("\nRoots are real and distinct %f \t %f",A,B);
	}
	else if (D<0){
		printf("\nRoots are imaginary");
	}
	else {
		printf("\nRoots are real and equal %f \t %f",A,B);
	}
}