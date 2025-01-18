#include<stdio.h>
#include<math.h>

float power(float x,float n){
	return pow(x,n);
}

int main(){
	float x,n;
	int sw;
	printf("Enter a number : ");
	scanf("%f",&x);
	printf("Enter 1 to calculate square root of the number \nEnter 2 to calculate the square of the number\nEnter 3 to calculate the cube root of the number\nEnter 4 to calculate the cube of the number\nEnter 5 to write the power for the number\n");
	scanf("%d",&sw);
	switch (sw){
		case 1 :
			printf("Square root = %f ",power(x,0.5));
			break;
		case 2 :
			printf("Square = %f ",power(x,2));
			break;
		case 3 :
			printf("Cube root = %f ",power(x,(1.0/3.0)));
			break;
		case 4 :{
			printf("Cube = %f ",power(x,3));
			break;
		}
		case 5 :
			printf("Enter power for the number ");
			scanf("%d",&n);
			printf("x^n = %f ",power(x,n));
			break;
		default :
			printf("Entered choice is not correct,try again.\nThank You!");
			
	}
}