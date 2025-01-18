#include<stdio.h>
int main(){
	float a,b,c;
	/* while inputing number the  number are seperated by a comma 
	*/
	printf("enter three number");
	scanf("%f,%f,%f",&a,&b,&c);
	printf("average of the numbers=%f",(a+b+c)/3);
}