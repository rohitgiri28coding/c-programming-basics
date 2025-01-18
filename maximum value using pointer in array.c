#include<stdio.h>
int main(){
	int *p=NULL,i,z;
	printf("Enter size of array ");
	scanf("%d",&z);
	int a[z];
	for(i=0;i<z;i++){
		printf("Enter elements ");
		scanf("%d",&a[i]);
	}
	p=a;
	for(i=1;i<z;i++){
		if(*p<a[i]){
			*p=a[i];
		}
	}
	printf("Maximum value = %d",*p);
}