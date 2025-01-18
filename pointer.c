#include<stdio.h>
int main(){
	int a=10;
	int *ptr,**ptrs;
	ptr=a;
	printf("%u",ptr);
	ptrs=&ptr;
	**ptrs=**ptrs+12;
	printf("\n%d",**ptrs);
	
}