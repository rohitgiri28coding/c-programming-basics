#include<stdio.h>
int main(){
	int n,flag=0;
	printf("Enter a number ");
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		if(n%i==0){
			flag++;
			break;
		}	
	}
	if(flag==1 ||n < 1){
		printf("%d is not a Prime Number",n);
	}
	else{
	 printf("%d is a Prime Number",n);
    }
}
