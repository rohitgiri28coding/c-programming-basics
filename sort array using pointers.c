#include <stdio.h>  
int main() 
{ 
    int n = 5; 
    int arr[] = { 0, 23, 54, 512, 9 }; 
   int i, j, temp;
   int *ptr=arr; 
    for (i = 0; i < n; i++) { 
  
        for (j = i + 1; j < n; j++) { 
  
            if (*(ptr + j) < *(ptr + i)) { 
  
                temp = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = temp; 
            } 
        } 
    } 
  

    for (i = 0; i < n; i++) 
        printf("%d ", *(ptr + i)); 
 
} 