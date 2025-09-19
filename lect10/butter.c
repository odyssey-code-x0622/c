#include<stdio.h>

int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        for(int k=1;k>=i;k--){
            printf(" ");
        }
        for(int l=1;l>=i;l--){
            printf(" ");
        }
        for(int m=0;m<=i;m++){
            printf("*");
        }
    }
    for(int a=0;a<3;a++){
        for(int n=3;n>a;n--){
            printf("*");
        }
        for(int p=1;p<=a;p++){
            printf(" ");
        }
        for(int q=1;q<=a;q++){
            printf(" ");
        }
        for(int g=3;g>a;g--){
            printf("*");
        }
        printf("\n");
    }
    }
    return 0;
}