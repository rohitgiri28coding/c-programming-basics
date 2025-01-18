#include<stdio.h>
int ASCII(char);
int main(){
	char c;
	printf("Enter a Character ");
	scanf("%c",&c);
	int a=ASCII(c);
	printf("\nASCII VALUE = %d",a);
}
int ASCII(char c){
	printf("ENTERED CHARACTER = %c",c);
	return c;
}