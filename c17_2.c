#include <stdio.h>

void swapintstr(int **dpt1, int **dpt2){
    int *temp=*dpt1;
    *dpt1=*dpt2;
    *dpt2=temp;

}

int main(void){
    int num1=1, num2=2;
    int *ptr1=&num1, *ptr2=&num2;
    printf("%d %d",*ptr1,*ptr2);
    swapintstr(&ptr1,&ptr2);
    printf("%d %d",*ptr1,*ptr2);
    printf("%p",ptr1);
}