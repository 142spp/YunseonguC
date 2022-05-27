#include <stdio.h>

int main(void){
    int num=0,sum=0;
    do{
        sum+=2*num;
        num++;
    }while(2*num<=100);
    printf("%d",sum);
    return 0;
}