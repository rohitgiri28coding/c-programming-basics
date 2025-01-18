#include<stdio.h>
#include<math.h>
int main(){
long int n,b,number,i=0,m,q,p,a,c;
printf("Enter a number");
scanf("%ld",&number);
n=number;
p=number;
b=n%10;
while(n>=10){
	n=n/10;}
 if(b>=0){
 printf("First digit is %d\nLast digit is %ld",n,b);
 
 while(number!=0){
 	number=number/10;
 	i++;}
 if(i%2==0){
 	i=i/2;
 	m=pow(10,i);
 	i--;
 	a=pow(10,i);
 	i+=2;
 	q=pow(10,i);
 	i--;
 	c=pow(10,i);
 	printf("\nMiddle term is %ld and %ld",(p%m)/a,(p%q)/c);
 }	
 else{
 	i=(i+1)/2;
 	m=pow(10,i);
 	i--;
 	a=pow(10,i);
 	printf("\nMiddle term is %ld",((p)%m)/a);
 }}
 else
 printf("INVALID INPUT");
 return 0;}
 
    	

 	

