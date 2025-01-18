#include<stdio.h>
#include<math.h>
int main(){
	int n,a,i,sum=0,b;
	printf("Enter a number ");
	scanf("%d",&n);
	a=n;
	b=n;
	for(i=0;a!=0;i++){
		sum+=a%10;
		a=a/10;}
	for(i=0;n!=0;i++){
		n=n/10;}	
	printf("Sum of all digits %d\n",sum);
	printf("Average of all digits %d\n",sum/i);
	for(i=0,sum=0;b!=0;i++){
		sum+=pow((b%10),2);
		b=b/10;}	
	printf("Square of all digit %d",sum);	
}