#include <stdio.h>

int main(void){
    int n;
    for(n=1; n<=100; n++){
        if(n%7==0||n%9==0){
            printf("%d \n",n);
        }
    }
    return 0;
}