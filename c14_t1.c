#include <stdio.h>

int Add(int *a, int len){
    int sum=0;
    for(int i=0; i<len; i++){
        sum+=a[i];
    }
    return sum;
}

int main(void){
    int arr[3]={1,2,3};
    printf("%d\n",Add(arr,sizeof(arr)/sizeof(int)));
}