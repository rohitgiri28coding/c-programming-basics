#include<stdio.h>
#include<math.h>
int main(){
int n,b,number,i=0,m,q,p;
printf("Enter a number");
scanf("%d",&number);
n=number;
p=number;
b=n%10;
while(n>=10){
	n=n/10;}
 if(b>=0)
 printf("First digit is %d\nLast digit is %d",n,b);
 else
 printf("INVALID INPUT");
 while(number!=0){
 	number=number/10;
 	i++;}
 if(i%2==0){
 	i=i/2;
 	m=pow(10,i);
 	i++;
 	q=pow(10,i);
 	printf("\nMiddle term is %d and %d",((p)%m)/10,((p)%q)/100);
 }	
 else{
 	i=(i+1)/2;
 	m=pow(10,i);
 	printf("Middle term is %d",((p)%m)/10);
 }
 return 0;}
 
    	

 	

