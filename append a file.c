#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp,*fp1;
	char ch;
	fp=fopen("xyz.txt","r");
	printf("Enter a sentence ");
	while((ch=getc(fp))!=EOF){
		printf("%c",ch);
	}
	fp1=fopen("xyz.txt","a");
	while((ch=getchar())!=EOF){
		putc(ch,fp1);
	}
	fclose(fp);
}