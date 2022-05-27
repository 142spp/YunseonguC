#include <stdio.h>

int main(void){
    int n,t;
    printf("input number : ");
    scanf("%d",&n);
    for(int k=0,h=1; 1; k++){
        
        if(h>n){
            printf("공식을 만족하는 최대 k : %d",k-1);
            break;
        }
        h*=2;
    }
}