// maximum no. in array
#include<stdio.h>

int main(){
    int arr[5]={1,2,4,3};
    int max=arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    printf("%d",max);
    return 0;

}
