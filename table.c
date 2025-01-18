#include<stdio.h>
int main(){
	int number,count=1;
	printf("Enter a number");
	scanf("%d",&number);
	while(count<=10){
		int n = count*number;
		printf("%d*%d=%d\n",number,count,n);
		count++;
	}
}