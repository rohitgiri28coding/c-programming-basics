#include<stdio.h>
int main(){
	int p,q,m,sum,k;
	printf("Enter row size of matrix A ");
	scanf("%d",&p);
	printf("\nEnter column size of the matrix A ");
	scanf("%d",&q);
	printf("\nEnter column size of matrix B ");
	scanf("%d",&m);
	int a[p][q],b[q][m],c[p][m];
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			printf("\n Enter element %d*%d for matrix A: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<q;i++){
		for(int j=0;j<m;j++){
			printf("\n Enter element %d*%d for matrix B : ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<p;i++){
		for(int j=0;j<m;j++){
			for(k=0,sum=0;k<q;k++){
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	printf("\nElements are\n");
	for(int i=0;i<p;i++){
		for(int j=0;j<m;j++){
			printf("\t%d ",c[i][j]);
		}
		printf("\n");
	}
}