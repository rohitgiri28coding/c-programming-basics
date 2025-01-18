#include<stdio.h>
int main(){
	int m,n,flag=0;
	printf("Enter lower limit to print prime number  ");
	scanf("%d",&m);
	printf("Enter upper limit to print prime number  ");
	scanf("%d",&n);
	for(;m<=n;m++){
		for(int j=2;j<m;j++){
			if(m%j==0){
				flag++;
				break;
			}
		}
		if(flag==0&&m!=0){
			printf("%d\t",m);
		}
		flag=0;
	}
}