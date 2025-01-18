#include<stdio.h>
struct student{
	int marks;
	char name[20];
};
int main(){
	struct student s[3];
	
	int i;
	
	for(i=0;i<3;i++){
		struct student *ptr = &s[i];
		scanf("%d%s",&(ptr)->marks,(ptr)->name);
		
	}

	for(i=0;i<3;i++){
	    struct student *ptr = &s[i];
		printf("%d%s\n",(ptr)->marks,(ptr)->name);
		
	}
}