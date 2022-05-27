#include <stdio.h>

int SquareByReference(int *n){
    *n= (*n)*(*n);
}

int main(void){
    int num;
    printf("Enter the numeber : ");
    scanf("%d",&num);
    SquareByReference(&num);
    printf("%d",num);
}