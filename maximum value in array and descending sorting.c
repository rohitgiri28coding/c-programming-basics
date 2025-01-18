#include<stdio.h>
int main(){
	int size,i,max=0;
	printf("Enter size of the array ");
	scanf("%d",&size);
	int array[size];
	for(i=0;i<size;i++){
		printf("Enter elements ");
		scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(array[i]<array[j]){
				max=array[j];
				array[j]=array[i];
				array[i]=max;
			}
		}
	}
	printf("Maximum element in the array is %d",array[0]);
	printf("\nSorted elements are\n");					
	for(i=0;i<size;i++){
		printf("%d\t",array[i]);
	}
}