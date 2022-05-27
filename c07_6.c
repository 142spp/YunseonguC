#include <stdio.h>

int main(void){
    int i=9,n;
    printf("input number : ");
    scanf("%d",&n);
    while(i>0){
        printf("%d \n",n*i);
        i--;
    }
    return 0;
}