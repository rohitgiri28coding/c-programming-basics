#include<stdio.h>
#include<math.h>
double integral_power(float x,float n){
    double num = 1;
    for(;n!=0;n--){
    num = x*num;	
    }
    return num;
 }
 
double non_integral_power(float x ,float n){
	double temp = n*log(x);
	temp = exp(temp);
	return temp;
}	

int main()
{
    float x,n; 
    
    printf("Enter a number : ");
    scanf("%f",&x);
    printf("Enter the power : ");
    scanf("%f",&n);
    float temp = n ;
    
    printf("Power fn %f\n",pow(x,n));

    if (n == 0){
    	printf("%f^0 = 1",x);
	}
	
	else if ( n>0 ){
		if(temp == n){
		 printf("(%f)^(%f) = %lf",x,temp,integral_power(x,n));
	    }
	    else{
	    	printf("(%f)^(%f)= %lf",x,temp,non_integral_power(x,n));
			}
		}
	
	else {
		if(temp == n){
		 printf("(%f)^(%f) = %lf",x,temp,integral_power(x,n));
	    }
	    else{
	    	printf("(%f)^(%f) = %lf",x,temp,non_integral_power(x,n));
			}
		}
		
}	

 
