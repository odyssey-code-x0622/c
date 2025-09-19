#include<stdio.h>

int main(){
    int n=11;
    int isprime=1;
    if(n<=1){
        printf("not prime");
        return 0;
    }
    int i=2;
    while (i<n)
    {
        if(n%i==0){
            isprime=0;
            break;
            i++;
        }
    }
    if(isprime){
        printf("prime");
    }
    else{
        printf("not prime");
    }
    return 0;
}