#include <stdio.h>

int SquareByValue(int n){
    return n*n;
}

int main(void){
    int num1;
    printf("Enter the number : ");
    scanf("%d",&num1);
    printf("%d",SquareByValue(num1));
}