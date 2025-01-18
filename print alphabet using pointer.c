#include<Stdio.h>
int main(){
	int ch='A';
	int *p=NULL;
	p=&ch;
	printf("Upper Case letters :\t");
	for(int i=0;i<26;i++){
		printf("%c\t",*p);
		*p=*p+1;
	}
    ch='a';
	p=&ch;
	printf("\nLower Case letters :\t");
	for(int i=0;i<26;i++){
		printf("%c\t",*p);
		*p=*p+1;
	}
}