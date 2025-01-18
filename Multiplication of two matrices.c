#include<stdio.h>
int main(){
	int i,j,k,m,n,p,q,sum;
	printf("Enter row size of Matrix A ");
	scanf("%d",&p);
	printf("Enter column size of Matrix A ");
	scanf("%d",&q);
	int a[p][q];
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
		printf("Enter element %d*%d = ",i+1,j+1);
		scanf("%d",&a[i][j]);
		}
	}
	printf("Enter row size of Matrix B ");
	scanf("%d",&m);
	printf("Enter column size of Matrix B ");
	scanf("%d",&n);
	
	if(m==q){
	int b[m][n], c[p][n];	
	for(j=0;j<m;j++){
		for(k=0;k<n;k++){
		printf("Enter element %d*%d = ",j+1,k+1);
		scanf("%d",&b[j][k]);
		}
	}
	for(i=0;i<p;i++){
		for(k=0;k<n;k++){
			for(j=0,sum=0;j<m;j++){
				sum+=a[i][j]*b[j][k];
			}
			c[i][k]=sum;
		}
	}
	printf("Multiplication will be \n");
	for(i=0;i<p;i++){
		for(k=0;k<n;k++){
			printf("%d\t",c[i][k]);
		}
		printf("\n");
	}
	}	
    else 
	printf("Multiplication is not possible for the given size of B");  }