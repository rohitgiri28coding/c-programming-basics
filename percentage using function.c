#include<stdio.h>
float percentmarks(float marks,float fm){
	float percent=(marks*100)/fm;
	return percent;
}
int main(){
	float marks,fm,sum_fm=0,sum_marks=0,n;
	printf("Enter total number of subjects ");
	scanf("%f",&n);
	for(int i =0; i<n; i++){
		printf("Enter marks obtained in the subject : ");	
		scanf("%f",&marks);
	    printf("Enter full marks of the subject : ");
    	scanf("%f",&fm);
    	sum_fm += fm;
    	sum_marks += marks;
    	printf("Percentage : %f%% \n",percentmarks(marks,fm));
		}
    printf("Aggregate percentage in all subjects : %f%%",percentmarks(sum_marks,sum_fm));
    printf("\nCongratulations!\nThank You!");
    }
    