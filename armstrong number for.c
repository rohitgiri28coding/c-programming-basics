#include<stdio.h>
#include<math.h>
int main(){
	int n,b,sum,c,a,i;
	printf("Enter a number");
	scanf("%d",&n);
	a=n;
	b=n;
	for(i=0;n!=0;i++){
		n=n/10;
	}
	for(sum=0;b!=0;){
		c=b%10;
		b=b/10;
		sum=sum+pow(c,i);
	}
	if(sum==a)
	printf("armstrong number");
	else
	printf("not an armstrong number");
}