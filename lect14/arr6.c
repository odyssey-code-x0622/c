#include<stdio.h>

int main(){
    int arr[5]={1,2,5,2,1};
    int isTrue=1;
        for(int i=0;i<5/2;i++){
        if(arr[i]!=arr[5-i-1]){
            isTrue=0;
        }
        
        }
        if(isTrue==1){
            printf("palindrome");
        }
        else{
            printf(" not palindrome");
        }
        }
    
