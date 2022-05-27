#include <stdio.h>

int main(void){
    int n1,sum=0;

    while(n1!=0){
        printf("input number : ");
        scanf("%d",&n1);
        sum+=n1;
    }
    printf("%d",sum);
}