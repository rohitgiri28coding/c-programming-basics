#include<stdio.h>
int main(){
	int number,count=10;
	printf("Enter a number");
	scanf("%d",&number);
	while(count>=1){
		int n = count*number;
		printf("%d*%d=%d\n",number,count,n);
		count--;
	}
}