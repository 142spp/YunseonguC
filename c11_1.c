#include <stdio.h>

int main(void){
    int arr[5],sum=0,min,max;
    for(int i=0; i<5; i++){
        printf("%d번째 정수값 : ",i);
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
        sum+=arr[i];
    }
    printf("max:%d  min:%d  sum:%d",max,min,sum);
}