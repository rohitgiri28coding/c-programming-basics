#include<stdio.h>
int main(){
	int n,search;
	printf("Enter size of array ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter element ");
		scanf("%d",&arr[i]);
	}
	for(int i=0,temp;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nEnter search value ");
	scanf("%d",&search);
	int f=0,l=n;
	int m=(f+l)/2;
	while(f<=l){
		if(arr[m]==search){
			printf("\nfound");
			break;
		}
		else if(arr[m]<search){
			f=m+1;
		}
		else
		l=m-1;
	}
}