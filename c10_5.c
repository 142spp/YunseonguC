#include <stdio.h>

int main(void){
    int num;
    for(int i=1; i<=1000; i++){
        num=0;
        for(int j=2; j<i; j++){
            if(i%j==0){
                num=1;
                break;
            }
            else{
                num=0;
            }
        }
        if(num==0){
            printf("%d ",i);
        }
    }
}