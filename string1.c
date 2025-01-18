#include<stdio.h>
#include<string.h>
int main(){
	char name[20],rev[20];
	printf("Enter a string ");
	gets(name);
	strlwr(name);
	strcpy(rev,name);
	strrev(rev);
	int a;
	a=strcmp(rev,name);
	(a==0)?printf("\nPalindrome"):printf("\nNot a palindrome");}