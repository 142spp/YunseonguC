#include <stdio.h>

int main(void){
    int num;
    printf("당신이 소유하고 있는 금액 : ");
    scanf("%d",&num);
    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            for(int k=1; 1; k++){
                if(i*500+j*700+k*400==num){
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n",i,j,k);
                }
                if(i*500+j*700+k*400>num){
                    break;
                }
            }
        }
    }
}