#include<stdio.h>

int main(){
    for(int i=0; i<3;i++){
        for(int j=3;j>i;j--){
            printf("*");
        }
        for(int k=1;k<=i;k++){
            printf(" ");
        }
        for(int m=1;m<=i;m++){
            printf(" ");
        }
        for(int l=3;l>i;l--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}