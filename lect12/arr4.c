// minimum element of array
#include<stdio.h>

int main(){
    int arr[5]={1,5,8,2};
    int min=arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}