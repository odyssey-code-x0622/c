#include<stdio.h>

int main(){
    for(int i=0; i<3;i++){
        for(int j=0;j<i;j++){
            if(i==1 && j==0){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        for(int l=0;l<2;l++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}