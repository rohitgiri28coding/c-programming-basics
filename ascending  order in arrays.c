#include<stdio.h>
int main(){
	int i,n,j,min;
	int a[i];
	printf("Enter size of array ");
	scanf("%d",n);
	for(i=0,j=1;i<n;i++,j++){
		printf("Enter element number %d ",j);
		scanf("%d",a[i]);
	}
	for(i=0;i<n;i++){
		for(j=1;j<n;j++){
			if(a[i]<a[j]){
			min=a[j];
			a[j]=a[i];
			a[i]=min;	
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("Maximum = %d",a[n-1]);
}