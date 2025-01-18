 #include<stdio.h>
 int main(){
 	int a,b,n;
	 printf("enter a five digit number");
	 scanf("%d",&n);
	 a=n/10000;
	 b=n%10;
	 float c;
	 c=(a+b)/2;
	 a>9||a==0 ? printf("INVALID INPUT\n") : printf("avg%f",c);
 }