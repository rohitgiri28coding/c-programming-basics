#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp1,*fp2,*fp3;
	char ch;
	fp1=fopen("xyz.txt","r");
	fp2=fopen("pqr.txt","w");
	fp3=fopen("pqr.txt","r");
	while((ch=getc(fp1))!=EOF){
		putc(ch,fp2);
	}
	while((ch=getc(fp3))!=EOF){
		printf("%c",ch);
	}
	fclose(fp1);
	fclose(fp2);
}