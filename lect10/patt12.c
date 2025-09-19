#include<stdio.h>
int main(){
    for(int i=0;i<3;i++){
    for(int j=0;j<=i; j++){
        printf("*");
    }
    for(int k=1;k>=i; k--){
        printf(" ");
    }
    for(int l=1;l>=i;l--){
        printf(" ");
    }
    for(int m=0;m<=i;m++){
        printf("*");
    }
    printf("\n");
    }
} 

