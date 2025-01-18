#include<stdio.h>
int add(int &p,int &q){
	return p+q;
}
int main(){
	int a=10,b=20;
	printf("%d",add(a,b));
	
}            