#include<stdio.h>
int main () {
   int n;
   float a,b;
    printf("enter a five digit number");
    scanf("%d",&n);
    a=n%10;
    b=n/10000;
    printf("print%f",(a+b)/2);   
	 }
