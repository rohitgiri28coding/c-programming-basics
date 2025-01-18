#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20];
	printf("Enter a string ");
	gets(a);
	printf("%s is a ",a);
	strcpy(b,strrev(a));
	int m;
	m=strcmp(a,b);
	(a==0)?printf("Palindrome"):printf("Not a palindrome");
}