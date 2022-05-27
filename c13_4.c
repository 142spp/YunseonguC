#include <stdio.h>

int main(void){
    int arr[]={1,2,3,4,5,6};
    int *ptr1=&arr[0];
    int *ptr2=&arr[5];

    for(int i=0, temp; i<3; i++){
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
        *ptr1++;
        *ptr2--;
    }

    printf("%d %d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]);
}