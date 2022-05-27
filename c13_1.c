#include <stdio.h>

int main(void){
    int arr[]={1,2,3,4,5};
    int *ptr=&arr[0];

    *ptr+=2;
    *(ptr+1)+=2;
    *(ptr+2)+=2;
    *(ptr+3)+=2;
    *(ptr+4)+=2;

    printf("%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);
}