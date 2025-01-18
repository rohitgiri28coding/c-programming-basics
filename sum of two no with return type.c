#include<stdio.h>
int number(int,int);
int main(){
	int a[2];
	for(int i=0;i<2;i++){
	printf("Enter a number ");
	scanf("%d",&a[i]);}
	int c=number(a[0],a[1]);
	printf("\nSum = %d ",c);
}
int number(int x,int y){
	printf("The given Numbers are : %d and %d",x,y);
	int s = x + y;
	return s;
}
