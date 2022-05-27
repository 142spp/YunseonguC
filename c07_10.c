#include <stdio.h>

int main(void){
    int n=-1,i=0;
    while(i<5){
        n=-1;
        while(n<i){
            printf("O");
            n++;
        }
        i++;
        printf("*\n");
    }
    return 0;
}