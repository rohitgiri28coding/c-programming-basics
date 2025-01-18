#include<stdio.h>
int main(){
	float a,b,c,d,e,f;
	printf("Enter Marks of 1st subject ");
	scanf("%f",&a);
	if(a<=100 && a>=0){
    	printf("Enter Marks of 2nd subject ");
        scanf("%f",&b);
	     if(b<=100 && b>=0){
    	 printf("Enter Marks of 3rd subject ");
    	 scanf("%f",&c);
		 	if(c<=100 && c>=0){
    	     printf("Enter Marks of 4th subject ");
        	 scanf("%f",&d);
        	    if(d<=100 && d>=0){
	              printf("Enter Marks of 5th subject ");
                	scanf("%f",&e);
    	             if(e<=100 && e>=0){
	    	           f=a+b+c+d+e;
		              printf("Aggregate marks = %f\nPercentage = %f%%",f/500,f/5);}
		              else
	                  printf("INVALID MARKS");}
					  else
	                  printf("INVALID MARKS");}
					  else
	                  printf("INVALID MARKS");}
					  else
	                  printf("INVALID MARKS");}
			          else
	                  printf("INVALID MARKS");}    
    	

 	

