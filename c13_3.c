#include <stdio.h>

int main(void){
    int arr[]={1,2,3,4,5};
    int sum=0;
    int *ptr=&arr[4];

    for(int i=0; i<5; i++){
        sum+=*ptr;
        *ptr--;
    }
    printf("%d",sum);

}