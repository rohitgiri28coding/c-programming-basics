#include<stdio.h>
int main(){
	int n,i,x,count;
	printf("Enter size of the array ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter Element ");
		scanf("%d",&a[i]);
	}
	printf("Enter Number ");
	scanf("%d",&x);
	for(i=0,count=0;i<n;i++){
		if(a[i]==x){
			count++;
		}
	}
	printf("The number %d occured %d times in the array.",x,count);
}