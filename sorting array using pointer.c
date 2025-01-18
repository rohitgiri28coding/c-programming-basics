#include<stdio.h>
int main(){
	int n,*ptr,temp;
	printf("Enter the size of array ");
	scanf("%d",&n);
	int arr[n];
	ptr=arr;
	for(int i=0;i<n;i++){
		printf("Enter element %d ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		if(*(ptr+i)>*(ptr+j)){
			temp=*(ptr+i);
			*(ptr+i)=*(ptr+j);
			*(ptr+j)=temp;
		}
	}
	}
	printf("Elements are \n");
	for(int i=0;i<n;i++){
		printf("\t%d ",arr[i]);}
}