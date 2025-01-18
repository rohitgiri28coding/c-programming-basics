#include<stdio.h>
int main(){
	int a,b,c,n;
	printf("enter 3 digit no.");
	scanf("%d",&n);
	a=n/100;
	b=(n%100)/10;
	c=n%10;
   if (a>b){
		if (a>c){
			printf("a is largest :%d\n",a);
			if(b>c){
				printf("c is smallest:%d\n",c);
				printf("b is middle:%d\n",b);
			}
			else {
				printf("b is smallest:%d\n",b);
				printf("c is middle:%d\n",c);}
				}
		else{
			printf("c is largest :%d\n",c);
			printf("b is smallest:%d\n",b);
			printf("a is middle:%d\n",a);}
		}
		else if (b>a){
		if(b>c){
		printf("b is largest :%d\n",b);
		if(a>c){
				printf("c is smallest:%d\n",c);
				printf("a is middle:%d\n",a);
		}
		else{
				printf("a is smallest:%d\n",a);
				printf("c is middle:%d\n",c);}
		}
		else{
				printf("c is largest :%d\n",c);
				printf("a is smallest:%d\n",a);	
				printf("b is middle:%d\n",b);}
		}	
		else{
		printf("INVALID INPUT\n");
	}
	 if (a==b|| b==c||a==c||(a/10)>9){
		printf("Some digit maybe equal or symbol or character\n");}
}
	    