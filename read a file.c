#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char ch;
	fp=fopen("xyz.txt","r");
	while((ch=getc(fp))!=EOF){
		printf("%c",ch);
	}
	fclose(fp);
}