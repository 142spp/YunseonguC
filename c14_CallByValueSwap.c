#include <stdio.h>

void Swap(int *n1, int *n2){
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    printf("%d %d",n1,n2);
}

int main(void){
    int n1=10, n2=20;
    Swap(&n1,&n2);
    printf("%d %d",n1,n2);
}