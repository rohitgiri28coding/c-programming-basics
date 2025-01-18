#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char ch;
	fp=fopen("xyz.txt","w");
	printf("Enter a sentence ");
	while((ch=getchar())!=EOF){
		putc(ch,fp);
	}
	fclose(fp);
}