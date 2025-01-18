#include<stdio.h>
int main(){
	int i,n,*p=NULL,min;
	printf("Enter size of array ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element \n");
		scanf("%d",&a[i]);
	}
	    p=a;
	for(i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		if(a[i]>a[j]){
			min=a[j];
			a[j]=a[i];
			a[i]=min;
		}	
		}
	}
	for(i=0;i<n;i++){
		printf("%d\t",*p);
		p++;
	}
}