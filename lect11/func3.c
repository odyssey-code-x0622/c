#include<stdio.h>              //even odd by functions

int even(int a){             //a is parameter //function definition
        if(a%2==0){
            printf("even");
        }
        else{
            printf("odd");
        }

}


int main(){           // 5 is argument   // function calling= even(5)
    even(5);
    printf("\n");
    even(6);
    return 0;
    even(8);           // here it is writen after return so it will not print in output ,any thing wrriten afer it will never run

}