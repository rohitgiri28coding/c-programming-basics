#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,choice_number;
	printf("Enter a number ");
	scanf("%d",&n);
	printf("Enter a choice number for following operations\n1 - even or odd\n2 - positive or negative\n3 - buzz number or not\n4 - exit\n");
	scanf("%d",&choice_number);
	switch(choice_number){
		case 1:
			if(n%2==0){
				printf("EVEN");}
			else{
				printf("ODD");}
		break;
		case 2:
			if(n>0){
				printf("POSITIVE");}
			else if (n==0){
				printf("ZERO");}
			else{
			printf("NEGATIVE");}
		break;
		case 3:
			if(n%7==0||n%10==7){
			printf("BUZZ NUMBER");}
			else{
			printf("NOT A BUZZ NUMBER");}
		break;
		case 4:
			exit(0);
		default:
			printf("INVALID INPUT");}
}