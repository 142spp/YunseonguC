#include <stdio.h>

int main(void){
    for(int n=1; n<=8; n++){
        if(n%2!=0){
            continue;
        }
        for(int i=1; 1; i++){

            if(i>n){
                break;
            }
            printf("%d*%d=%d \n",n,i,i*n);
            
        }
    }
}