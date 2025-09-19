#include<stdio.h>

int main(){
    int n=7;
    int t1=0;
    int t2=1;
    int next;
    int i=1;
    while(i<=n){
        printf("%d",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
        i++;
    }
    return 0;
}