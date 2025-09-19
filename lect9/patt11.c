#include<stdio.h>

int main(){
    int num=65;
    for(int i=0;i<3;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=3;k>i;k--){
            printf("%c",num++);
        }
        for(int p=2;p>i;p--){
            printf("%c",num++);
        }
        printf("\n");
    }
    return 0;
}