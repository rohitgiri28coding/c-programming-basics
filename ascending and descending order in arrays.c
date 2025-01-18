#include<stdio.h>
int main(){
	int a[10][10],b[10][10],c[10][10],i,j,k,l,m,n,p,q;
	printf("Enter size of Matrix A(>=10) ");
	scanf("%d,%d",&p,&q);
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
		printf("Enter element %d*%d",i,j);
		scanf("%d",&a[i][j]);}}
	printf("Enter size of Matrix B(>=10) ");
	scanf("%d,%d",&m,&n);
	if(m==q){
	
	for(j=0;j<m;j++){
		for(k=0;k<q;k++){
		printf("Enter element %d*%d ",j,k);
		scanf("%d",&b[j][k]);}}
	for(i=0;i<p;i++){
		for(k=0;k<n;k++){
			for(j=0;j<m;j++){
				c[i][k]=a[i][j]*b[j][k];
			}
		}
	}}	
    else 
	printf("Multiplication is not possible for the given size of B");  }