#include<stdio.h>
int main(){
	double n;
	printf("Enter distance between the cities in km");
	scanf("%lf",&n);
	printf("D in meter %lf\nD in centimeters %lf\nD in feet %lf\nD in inches %lf",1000*n,100000*n,3280.84*n,39370.1*n);
}