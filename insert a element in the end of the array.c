#include<STDIO.H>
int main(){
	int size;
	printf("Enter size of the array ");
	scanf("%d",&size);
	int array[size+1];
	for(int i=0;i<size;i++){
		printf("Enter element ");
		scanf("%d",&array[i]);
	}
	printf("Elements are\n");
	for(int i=0;i<size;i++){
		printf("%d\t",array[i]);
	}
	printf("\nEnter a element to be insterted at the end ");
	scanf("%d",&array[size]);
	printf("\nElements are\n");
	for(int i=0;i<=size;i++){
		printf("%d\t",array[i]);
	}
}