#include<stdio.h>
void number(int,int);
int main(){
	int a[2];
	for(int i=0;i<2;i++){
	printf("Enter a number ");
	scanf("%d",&a[i]);}
	number(a[0],a[1]);
}
void number(int x,int y){
	printf("The given Numbers are : %d and %d",x,y);
}
