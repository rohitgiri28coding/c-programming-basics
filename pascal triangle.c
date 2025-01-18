#include<stdio.h>
int fact(int n){
	int fact=1;
	for(;fact<=n;n--){
		fact *= n;
	}
	return fact;
}
int combn(int k){
	int r=0, arr[k];
	for(int i=0;i<k;i++,r++){
		arr[i]=((fact(k))/(fact(k-r)*fact(r)));
	}
	for(int i=0;i<k;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
	static int row,sp;
	printf("Enter the number of rows(starts from 0th row) ");
	scanf("%d",&row);
	sp=row;
	for(int i=0;i<=row;i++){
		printf("\t");
		for(;sp!=0;sp--){
			printf(" ");
			for(int j=0;j<=row;j++){
				combn(j+1);
			}
			printf("\n");
		}
	}
}