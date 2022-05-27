#include <stdio.h>

int main(void){

    for(int a=1; a<=9; a++){
        for(int z=1; z<=9; z++){
            if(10*a+z+10*z+a==99){
                printf("A:%d  Z:%d \n",a,z);
            }
        }
    }
}