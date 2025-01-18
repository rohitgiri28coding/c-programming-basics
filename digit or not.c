#include<stdio.h>
int main() {
	char a;
	printf("Enter any character");
	scanf("%c",&a);
	if(a <= '9' || a >= '0') {
	printf ("The given character is a digit"); }
	else
	printf("The given character is not a digit");
}