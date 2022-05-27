#include <stdio.h>

int main(void){
    int arr[10];

    for(int i=0; i<10; i++){
        printf("Enter the number : ");
        scanf("%d",&arr[i]);
    }

    printf("odd output : ");
    for(int i=0; i<10; i++){
        if(arr[i]%2!=0){
            printf("%d ",arr[i]);
        }
    }
    printf("\neven output : ");
    for(int i=0; i<10; i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
}