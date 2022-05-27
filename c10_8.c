#include <stdio.h>
int square(int);
int main(void){
    int n;
    printf("정수 입력 : ");
    scanf("%d",&n);
    printf("2 ^ %d = %d",n,square(n));

    return 0;
}

int square(int num){

    if(num==0){
        return 1;
    }
    else{
        return 2*square(num-1);
    }
    
}