#include <stdio.h>

int Add(int *a, int len){
    int sum=0;
    for(int i=0; i<len; i++){
        sum+=a[i];
    }
    return sum;
}

int main(void){
    int arr[10];

    for(int i=0; i<10; i++){
        printf("Enter %d th number : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("the sum of arr is %d",Add(arr,sizeof(arr)/sizeof(int)));
}