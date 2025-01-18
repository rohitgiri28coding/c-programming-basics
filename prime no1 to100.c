#include<stdio.h>
int main(){
	int flag=0;
	printf("1\t");
	for(int n=2;n<=100;n++){
		for(int i=2;i<n;i++){
			if(n%i==0){
			flag++;
			break;}
		}
	if(flag==0)	
	  printf("%d\t",n);
	flag=0;  
	}
}