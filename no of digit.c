#include<stdio.h>
int main(){
	int n,a,i;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=0;n!=0;i++){
		n=n/10;
	}
	printf("%d",i);
}