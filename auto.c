#include<stdio.h>
int main(){
	int a=4;
	for (int i=0;i<4;i++){
		for(register int j=0;j<=2;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}