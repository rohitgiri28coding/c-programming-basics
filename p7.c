#include<stdio.h>
int main(){
	
	for(int i=1,sp=4;i<=5;i++,sp--){
		for(int k=1;k<=sp;k++){
			if(k%2==0)
			printf(" ");
			else
			printf("\"");
		}
		for(int j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}