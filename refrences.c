#include<stdio.h>
int main(){
	int &p;
	int a=3;
	p=a;
	printf("%d",p);
}