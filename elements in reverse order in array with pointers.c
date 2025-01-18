#include<stdio.h>
int main(){
	int *p=NULL,i,m;
	printf("Enter size of the array ");
	scanf("%d",&m);
	int q[m];
	for(i=0;i<m;i++){
		printf("Enter elements ");
		scanf("%d",&q[i]);
	}
	p = &q[m-1];
	for(i=0;i<m;i++){
		printf("%d\t",*p);
		p--;
	}
}