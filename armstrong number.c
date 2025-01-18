#include<stdio.h>
#include<math.h>
int main(){
	int n,num,i=0,sum=0,b,a;
	printf("Enter a number");
	scanf("%d",&n);
	num=n;
	b=n;
	while(num!=0){
		num =num/10;
		i++;
	}
	while(n!=0){
		a=n%10;
		sum=sum+(pow(a,i));
		n=n/10;
	}
	if(b==sum) 
	 printf("ARMSTRONG NUMBER");
	 else
	 printf("Not an Armstrong Number");
}