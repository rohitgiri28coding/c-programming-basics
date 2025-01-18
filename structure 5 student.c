#include<stdio.h>
struct student{
   int 	roll;
   char name[20];
   float percentage;	
}s[5];
int main(){
	printf("Enter records for students \n");
	for(int i=0;i<5;i++){
		printf("Enter roll of student %d ",i+1);
		scanf("%d",&s[i].roll);
		printf("Enter name of student %d ",i+1);
		scanf("%s",&s[i].name);
		printf("Enter percentage of student %d ",i+1);
		scanf("%f",&s[i].percentage);
	}
	printf("\nRecords are :- \n");
	printf("Roll\tName\tPercentage");
	for(int i=0;i<5;i++){
		printf("\n%d\t%s\t%f",s[i].roll,s[i].name,s[i].percentage);
	}
}