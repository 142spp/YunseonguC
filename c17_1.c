#include <stdio.h>

void swapintptr(int *pt1, int *pt2){
    int temp=*pt1;
    *pt1=*pt2;
    *pt2=temp;
}



int main(void){
    int num1=10, num2=20;
    int *ptr1=&num1, *ptr2=&num2;

    printf("*ptr1, *ptr2 : %d %d",*ptr1,*ptr2);
    
    swapintptr(ptr1,ptr2);
    printf("*ptr1, *ptr2 : %d %d",*ptr1,*ptr2);
    return 0;
}