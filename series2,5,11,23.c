#include<stdio.h>
int main(){
int a=2,d=3;
//2,5,11,23,47
while(a<=47){
	printf("%d\t",a);
	a=a+d;
	d=d*2;
}
}