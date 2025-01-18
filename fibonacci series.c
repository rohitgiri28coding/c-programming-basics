#include<stdio.h>
int main(){
	int a=0,b=1,s=0,i=0,n;
	printf("Enter number of term\t");
	scanf("%d",&n);
	if(n==1){
	printf("%d\n",a);}
	else if (n==2){
	printf("\n%d\n%d",a,b);}
	else if(n<0){
		printf("Invalid input\n");
	}
	else{
			printf("%d\n%d\n",a,b);
	while(i<n-2){
		s=a+b;
		printf("%d\n",s);
		a=b;
		b=s;
		i++;
	}
}
}