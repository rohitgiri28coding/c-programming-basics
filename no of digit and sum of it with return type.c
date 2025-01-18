#include<stdio.h>
int sum(int);
int main(){
	int number;
	printf("Enter a number ");
	scanf("%d",&number);
	int res= sum(number);
	printf("\nSum of all digits = %d",res);
}
 sum(int n){
	int sum=0,i;
	for(i=0;n!=0;i++){
		sum+=(n%10);
		n=n/10;
	}
	printf("\nNumber of digits =%d",i);
	return sum;
}