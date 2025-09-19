#include<stdio.h>

int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
            if(i==1 && j==1){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        for(int k=2;k<i;k++){
            printf(" ");
        }
        for(int l=2;l>i;l--){
            printf("*");
        }
        printf("\n");
        
            }
            return 0;
        }
    