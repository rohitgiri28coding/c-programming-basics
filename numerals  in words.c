#include<stdio.h>
#include<string.h>
int no_of_digits(int n,int* count){
	for(;n!=0;){
		*count+=1;
		n/=10;
	}
}
void con_word(int n,int count){
	 char* ch1[] = {"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	 char* ch2[] = {"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen","Twenty"};
	 char* ch3[] = {"Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninty"};
	 char* ch4[] = {"Hundred","Thousand"};
	if(count == 1){
	    printf("%s = %d",ch1[n-1],n);
	}
	else if(count == 2){
		if(n<21){
			printf("%s = %d",ch2[n-10],n);
		}
		else{
			printf("%s %s = %d",ch3[(n/10)-1],ch1[(n%10)-1],n);
		}	
	}
	else if(count == 3){
		printf("%s Hundred and %s %s =%d",ch1[(n/100)-1],ch3[((n%100)/10)-1],ch1[(n%10)-1],n);
	}
	else if(count == 4){
		printf("%s Thousand %s Hundred and %s %s =%d",ch1[(n/1000)-1],ch1[((n/100)%10)-1],ch3[((n%100)/10)-1],ch1[(n%10)-1],n);
	}
}


int main(){
	int n,count=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n==0){
	printf("Zero = 0");}
	else{
	no_of_digits(n,&count);
	printf("Number of digits = %d\n",count);
	con_word(n,count);}
	
}