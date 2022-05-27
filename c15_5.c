#include <stdio.h>

int main(void){
    int arr[7];
    for(int i=0; i<7; i++){
        printf("enter the number : ");
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<6; i++){
        for(int j=0; j<6-i; j++){
            if(arr[j]<arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0; i<7; i++){
        printf("%d",arr[i]);
    }
}