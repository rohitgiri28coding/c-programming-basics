#include<stdio.h>
int main(){
    int p,q,i,j,sum;
	printf("Enter row size of Matrices ");
	scanf("%d",&p);
	printf("Enter column size of Matrices ");
	scanf("%d",&q);
	int a[p][q],b[p][q],c[p][q];
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
		printf("Enter element %d*%d  for Matrix A= ",i+1,j+1);
		scanf("%d",&a[i][j]);}}
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
		printf("Enter element %d*%d  for Matrix B= ",i+1,j+1);
		scanf("%d",&b[i][j]);}}
	for(i=0;i<p;i++){
		for(j=0,sum=0;j<q;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Addition will be \n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");}
	}
	