#include <stdio.h>

void MaxAndMin(int *arr,int len,int **max, int **min){
    *max=&arr[0];
    *min=&arr[0];

    for(int i=0; i<len; i++){
        if(**max<arr[i]){
            *max=&arr[i];
        }
        if(**min>arr[i]){
            *min=&arr[i];
        }
    }
}

int main(void){
    int arr[5];
    int *max=0;
    int *min=0;
    int len=5;

    int **dpmax=&max, **dpmin=&min;

    for(int i=0; i<5; i++){
        printf("Enter the %d th number : ",i);
        scanf("%d",&arr[i]);
    }

    MaxAndMin(arr,len,dpmax,dpmin);

    printf("%d %d",*max,*min);
}