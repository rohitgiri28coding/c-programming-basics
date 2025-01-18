#include<stdio.h>
int main() {
	char ch;
	printf("Enter a character");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z'){
		printf("Capital\n");
	}
	else if(ch>='a' && ch<='z') {
			printf("small\n");
		}
	else if(ch>='0' && ch<='9') {
		printf("digit\n");
	}
	else
	printf("symbol\n");
}