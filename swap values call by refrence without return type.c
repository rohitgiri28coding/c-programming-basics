#include<stdio.h>
void swap(int*,int*);
int main(){
	int n1,n2;
	printf("Enter a number ");
	scanf("%d",&n1);// a=20
	printf("Enter a number ");
	scanf("%d",&n2);//b=10
	printf("BEFORE SWAP %d and %d",n1,n2);
	swap(&n1,&n2);
}
void swap(int*p,int*q){
	*p=*p+*q;//*p=30
	*q=*p-*q;//*q=30-10=20
	*p=*p-*q;//*p=30-20=10
	printf("\nSWAPPED VALUES ARE %d and %d \n",*p,*q);
}