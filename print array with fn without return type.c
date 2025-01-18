#include<stdio.h>
int arr_val(int);
int main(){
	int size;
	printf("Enter size of the array ");
	scanf("%d",&size);
	int array[size];
    array[size]=arr_val(size);
	printf("\nElements are\t");
	for(int i=0;i<size;i++){
		printf("%d\t",array[i]);
	}
}
int arr_val(int n){
	int a[n];
	for(int i=0;i<n;i++){
		printf("Enter value of elements in array ");
		scanf("%d",&a[i]);
	}
	printf("Elements are\t");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return a[n];
}